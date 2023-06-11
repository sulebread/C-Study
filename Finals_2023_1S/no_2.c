#include <stdio.h>

int max = 0;
int Max(int a, int b, int c){
    max = a > b ? a : b;
    max = max > c ? max : c;

    return max;
}

int mani(void){
    int max = 0;
    Max(3,4);
    printf("가장 큰 수는 %d입니다.", max);

    return 0;
}
