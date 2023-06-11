#include <stdio.h>

void swap(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main(void){
    int c = 10, d = 20;
    printf("swap 전의 c = %d, d = %d\n", c, d);
    swap(c, d);

    printf("swap 후의 c = %d, d = %d\n", c, d);

    return 0;
}

//예상결과
//swap 전의 c = 10, d = 20;
//swap 후의 c = 10, d = 20;