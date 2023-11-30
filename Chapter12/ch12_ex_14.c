#include <stdio.h>

typedef struct date
{
    int year, month, day;
} DATE;

int main(void)
{
    FILE *fp = NULL;

    DATE holidays[] = {
        {2022, 1, 1}, {2022, 3, 1}, {2022, 5, 1}, {2022, 6, 6},
    };
    int count = sizeof(holidays) / sizeof(holidays[0]);

    //반드시 동일하게 초기화해주어야함. 그렇지 않으면 메모리를 침범하는듯.....?
    DATE checkHolidays[] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},};

    fp = fopen("holiday.dat", "wb");
    if(fp == NULL)
    {
        puts("출력파일 열기 실패");
        return 1;
    }

    fwrite(holidays, sizeof(holidays[0]), count, fp);
    fclose(fp);
    fp = NULL;
    puts("파일저장 완료");

    //정상적으로 저장되었는지 파일 불러와서 확인
    fp = fopen("holiday.dat", "rb");
    if(fp == NULL)
    {
        puts("입력파일 열기 실패");
        return 1;
    }
    
    fread(checkHolidays, sizeof(holidays[0]), count, fp);
    fclose(fp);
    fp = NULL;
    
    int count2 = sizeof(checkHolidays) / sizeof(checkHolidays[0]);
    
    for(int i = 0; i < count2; i++)
    {
        printf("holidays[%02d]: %d.%d.%d    checkHolidays[%02d]: %d.%d.%d\n", 
            i, holidays[i].year, holidays[i].month, holidays[i].day, 
            i, checkHolidays[i].year, checkHolidays[i].month, checkHolidays[i].day);
    }

    return 0;
}