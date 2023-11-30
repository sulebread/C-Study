#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    FILE *fp = NULL;
    char filename[BUFSIZ];
    char str[BUFSIZ];
    int countLine = 1;
    int countAlphabet[26] = {0,};
    int count = 0;

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

        //line마다 Alphabet 개수 세기
        while(str[count])
        {
            //대문자인 경우
            if((str[count] > 64) && (str[count] < 91))
                countAlphabet[(str[count] - 65)]++;
            
            //소문자인 경우
            if((str[count] > 96) && (str[count] < 123))
                countAlphabet[(str[count] - 97)]++;

            count++;
        }

        count = 0;

        //line번호
        countLine++;
    }
    puts("\n-------------------");
    fclose(fp);
    fp = NULL;

    //Alphabet 개수 출력
    int printCount = 0;
    for(int i = 0; i < 26; i++)
    {
        if(countAlphabet[i] != 0)
        {
            printf("%c: %d  ", i + 65, countAlphabet[i]);
            printCount++;
        }
        
        if(printCount == 11)
            printf("\n");
    }

    return 0;
}