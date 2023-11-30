#include <stdio.h>

int main(void){
    FILE *fp = NULL;
    int ch;

    //파일 출력모드로 열기
    //fp = fopen("a.txt", "w");
    
    //파일 입력모드로 열기
    fp = fopen("a.txt", "r");

    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    //읽은 문자 파일로 저장
    /* 
    while ((ch = fgetc(stdin)) != EOF)
    {
        fputc(ch, fp);
    }
    */

   //콘솔출력
    while((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }

    fclose(fp);

    return 0;    
}