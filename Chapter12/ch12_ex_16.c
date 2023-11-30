#include <stdio.h>

typedef struct date
{
    int year, month, day;
} DATE;

int main(void)
{
    FILE *fp = NULL;

    DATE holiday;

    fp = fopen("holiday.txt", "w");

    while(1)
    {
        printf("연 월 일? ");
        scanf("%d %d %d", &holiday.year, &holiday.month, &holiday.day);

        if(holiday.year == 0 && holiday.month == 0 && holiday.day == 0)
            break;
        
        fprintf(fp, "%d/%d/%d\n", holiday.year, holiday.month, holiday.day);
    }

    fclose(fp);
    fp = NULL;

    printf("저장완료!\n");

    return 0;
}