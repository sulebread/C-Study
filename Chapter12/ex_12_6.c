#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[BUFSIZ];

    fp = fopen("a.txt", "r");

    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    //파일에서 한줄의 문자열 읽어오기
    while(fgets(str,sizeof(str), fp) != NULL)
    {
        fputs(str, stdout);
        // puts("DDD");
    }

    fclose(fp);

    return 0;
}