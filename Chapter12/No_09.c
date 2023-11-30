#include <stdio.h>
#include <ctype.h>

void encryption(char *str, int key);

int main(void)
{
    FILE *fp = NULL;
    int key;
    char str[BUFSIZ];

    printf("암호 키? ");
    scanf("%d", &key);
    while(getchar() != '\n'){}
    puts("암호화할 텍스트?");
    fgets(str, sizeof(str), stdin);
    
    //암호화하기
    encryption(str, key);
    
    //파일쓰기 스트림
    fp = fopen("cipher.txt", "w"); 
    if(fp == NULL)
    {
        puts("파일열기 실패\n");
        return 1;
    }

    fputs(str, fp);
    puts("파일쓰기 완료\n");
    fclose(fp);
    fp = NULL;

    return 0;
}

//암호화 하기
void encryption(char *str, int key)
{
    int i = 0; 

    while(str[i])
    {
        //대문자인 경우
        if(isupper(str[i]))
        {
            str[i] = str[i] + key;

            if(str[i] > 'Z')
            {
                str[i] = str[i] - 'Z' + 'A' - 1;
            }
        }
        //소문자인 경우
        else if(islower(str[i]))
        {
            str[i] = str[i] + key;

            if(str[i] > 'z')
            {
                str[i] = str[i] - 'z' + 'a' - 1;
            }
        }

        i++;
    }
}