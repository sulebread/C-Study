#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = NULL;
    char filename[BUFSIZ];
    char str[BUFSIZ];
    int countLine = 1;

    //파일명 받기
    printf("파일명? ");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';

    //파일 읽기 스트림 생성
    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        puts("파일 열기 실패!\n");
        return 1;
    }

    //읽은 파일 출력
    while((fgets(str, sizeof(str), fp)) != NULL)
    {
        printf("%d: %s", countLine, str);
        
        //line번호
        countLine++;
    }
    
    fclose(fp);
    fp = NULL;

    return 0;
}