#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decryption(char *str, int key);

int main(void)
{
    FILE *fp = NULL;
    int key;
    char filename[BUFSIZ];
    char str[BUFSIZ];

    printf("복호화할 파일? ");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';
    
    printf("복호키? ");
    scanf("%d", &key);

    //파일 읽기 스트림
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        puts("파일열기 실패\n");
        return 1;
    }

    //파일 읽어오기
    fgets(str, sizeof(str), fp);
    fclose(fp);
    fp = NULL;
    
    //복호화하기
    decryption(str, key);
    fputs(str, stdout);

    return 0;
}

//복호화 하기
void decryption(char *str, int key)
{
    int i = 0; 

    while(str[i])
    {
        //대문자인 경우
        if(isupper(str[i]))
        {
            str[i] = str[i] + key;

            if(str[i] < 'A')
            {
                str[i] = str[i] - 'A' + 'Z' + 1;
            }
        }
        //소문자인 경우
        else if(islower(str[i]))
        {
            str[i] = str[i] + key;

            if(str[i] < 'a')
            {
                str[i] = str[i] - 'a' + 'z' + 1;
            }
        }

        i++;
    }
}