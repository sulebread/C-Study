#include <stdio.h>

int main(){
    int data[3][5];
    int (*p)[5] = data;//&data[0];
    // p = data;

    printf("data[0][0]의 주소 : %p\n", &data[0][0]);
    printf("data[0][1]의 주소 : %p\n", &data[0][1]);
    printf("data[0]의 주소 : %p\n", &data[0]);
    printf("data[1]의 주소 : %p\n", &data[1]);
    printf("p[0]의 값 : %p\n", p[0]);
    printf("p[1]의 값 : %p\n", p[1]);

}