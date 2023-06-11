#include <stdio.h>
#define PI 3.14

int input();
float circle(int);

int main(void){
    int radius;
    float area;

    radius = input();
    area = circle(radius);

    printf("원의 넓이는 %.2f 입니다.\n", area);

    return 0;
}

//원 반지름 입력받는 함수
int input(){
    int radius;

    printf("원의 반지름 r(정수)? ");
    scanf("%d", &radius);

    return radius;
}

//원 넓이 구하는 함수
float circle(int radius){
    float area = radius * radius * PI;

    return area;
}
