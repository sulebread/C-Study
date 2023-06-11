#include <stdio.h>

void test(void);
double x = 0.01;

int main(void){
    double x = 0.5;

    while (1) {
        double x = 1.23;
        printf("in while block: x = %f\n", x);
        if (x > 1)
            break;
    }

    printf("in main block: x = %f\n", x);
    test();
    
    return 0;
}

void test(void){
    x*= 10;
    printf("in functin block: x = %f\n", x);
}