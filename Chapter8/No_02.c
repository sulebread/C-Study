#include <stdio.h>

int main(void){
    double arr[10] = {1.1, 2.12, 3.123, 4.50, 5.20, 6.89, 7.32, 8.45, 9.61, 10.0};
    double *p;
    p = arr; //포인터 변수에 배열 대입

    //포인터 변수로 배열의 원소값 출력
    for(int i = 0; i < 10; i++){
        printf("arr[%d]의 값 : %lf\n", i, p[i]);
    }

    return 0;
}
