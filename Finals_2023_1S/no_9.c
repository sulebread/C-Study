#include <stdio.h>

//함수 선언
int AAA(int);

int main(void){
    int x;

    scanf("%d", &x);
    printf("홀수의 합 : %d\n", AAA(x));
    
    return 0;
}

//함수정의
int AAA(int x){
    int sum = 0;
    int i;

    for(i = 1; i <= x; i++){
        if((i % 2) != 0)
            sum += i;
    }

    return sum;
}