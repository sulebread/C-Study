#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

void encodeString(char *str, int key);

int main(void){
    char str[MAX] = "";
    int key;

    while (1)
    {   
        //문자열 입력  
        printf("문자열? ");
        fgets(str, MAX, stdin);
        
        //.입력하면 루프 탈출
        if(str[0] == '.')
            break; 
        
        //암호키 입력
        printf("암호 키(정수)? ");
        scanf("%d", &key);

        //암호화 함수 호출
        encodeString(str, key);
        printf("암호화된 문자열? %s", str);

        //터미널에 남아있는 개행문자 처리
        fgets(str, MAX, stdin);

        //TODO: 배열초기화할 필요 없을지?
    }   
}

void encodeString(char *str, int key){
    for(int i = 0; i < strlen(str); i++){
        //대문자인 경우
        if(isupper(str[i])){
            //문자열 하나씩 key만큼 더하기
            str[i] = (char)(str[i] + key);

            //암호키를 더한 값이 Z를 벗어나면
            if(str[i] > 'Z'){
                //A로 돌아오도록 하는 로직
                str[i] = (char)(str[i] - 'Z' + 'A' - 1);   
            }
        }
        //소문자인 경우
        else if(islower(str[i])){
            //문자열 하나씩 key만큼 더하기
            str[i] = (char)(str[i] + key);

            //암호키를 더한 값이 z를 벗어나면
            if(str[i] > 'z'){
                //a로 돌아오도록 하는 로직
                str[i] = (char)(str[i] - 'z' + 'a' - 1);
            }
        }
    }
}