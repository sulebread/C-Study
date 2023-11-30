#include <stdio.h>

typedef struct date
{
    int year, month, day;
} DATE;

int main(void)
{
    FILE *fp = NULL;

    DATE holidays[4];

    fp = fopen("holiday.dat", "rb");
    fread(holidays, sizeof(holidays[0]), 4, fp);
    fclose(fp);
    fp = NULL;
    
    for(int i = 0; i < 4; i++)
    {
        printf("holidays[%02d]: %d.%d.%d\n", i, holidays[i].year, holidays[i].month, holidays[i].day);
    }
}
