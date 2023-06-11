#include <stdio.h>

int max = 0;
int Max(int a, int b, int c){
    max = a > b ? a : b;
    max = max > c ? max : c;

    return max;
}

int main(void){
    int max = 0;

    //함수 인자값 추가
    Max(3,4,1);
    printf("가장 큰 수는 %d입니다.", max);

    return 0;
}
