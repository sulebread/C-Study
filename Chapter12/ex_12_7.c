#include <stdio.h>
#include <string.h>

int main(void)
{
    char in_fname[128] = ""; //입력 파일 이름 저장
    char out_fname[128] = ""; //출력 파일 이름 저장
    char str[BUFSIZ];

    FILE *fin = NULL; //입력 스트림 포인터
    FILE *fout = NULL; //출력 스트림 포인터

    printf("파일이름? ");
    fgets(in_fname, sizeof(in_fname), stdin);
    in_fname[strlen(in_fname) - 1] = '\0';

    fin = fopen(in_fname, "r");
    if(fin == NULL)
    {
        printf("%s 파일 열기 실패\n", in_fname);
        return 1;
    }

    strcpy(out_fname, in_fname); //입력 파일명 복사
    strcat(out_fname, ".bak"); //출력 파일 이름 만들기

    fout = fopen(out_fname, "w");

    if(fout == NULL)
    {
        printf("%s 파일 열기 실패\n", out_fname);
        return 1;
    }

    while (fgets(str, sizeof(str), fin) != NULL)
    {
        fputs(str, fout);
    }

    fclose(fin);
    fclose(fout);
    
    printf("파일 백업 성공\n");

    return 0;
}