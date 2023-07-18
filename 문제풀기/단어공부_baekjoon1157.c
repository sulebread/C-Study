#include <stdio.h>

int main(void){
    int max = -1, index, check = 0;
    char result = 0;
    char arr[1000000]= {'0',};
    int count[26] = {0,};

    //문자입력
    scanf("%s", arr);

    //대문자 범위에 있거나, 소문자 범위에 있는 경우
    for(int i = 0; i < 1000000; i++){
        if((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')){
            int alphabet = 0;

            //알파벳이 소문자인 경우 대문자로 전환
            if(arr[i] > 'Z'){
                arr[i] -= 32;
            }

            //arr[i]에 들어있는 알파벳 번호 구하고, count 하기
            alphabet = arr[i] - 'A';
            count[alphabet]++;
        }else{
            break;
        }
        
    }
    
    //max = count가 가장 큰 숫자 구하기. 
    //max count의 알파벳 번호 저장하기.
    for(int i = 0; i < 26; i++){
        if(count[i] > max){
            max = count[i];
            index = i;
        }
    }

    //count가 가장 큰 숫자가 여러개 있는 경우 ? 출력.
    for(int i = 0; i < 26; i++){
        if(count[i] == max && i != index){
            printf("?");
            check = 1;
            break;
        }
    }

    //count가 가장 큰 숫자가 하나만 있는 경우 알파벳 번호 아스키 코드화하기.
    if(check != 1){
        printf("%c", index + 'A');
    }

    return 0;
}