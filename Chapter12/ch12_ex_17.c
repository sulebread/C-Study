#include <stdio.h>

typedef struct date
{
    int year, month, day;
} DATE;

int main(void)
{
    FILE *fp = NULL;

    DATE holidays[50];
    int i = 0, count = 0;

    fp = fopen("holiday.txt", "r");

    while (count < 50)
    {
        DATE temp = {0, };
        int result = fscanf(fp, "%d/%d/%d", &temp.year, &temp.month, &temp.day);
 
        if(result < 3 || feof(fp) != 0)
            break;
 
        holidays[count] = temp;
        count++;
    }
    fclose(fp);
    puts("읽기완료!\n");

    for(i = 0; i < count; i++)
    {
        printf("%d/%d/%d\n", holidays[i].year, holidays[i].month, holidays[i].day);
    }

    return 0;    
}