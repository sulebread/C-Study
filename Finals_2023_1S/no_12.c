#include <stdio.h>

int AAA(void);

int main(void) {
    int num;

    num = AAA();

    if ((num % 2) == 0) {
        printf("%d는 짝수 입니다.\n", num);
    } else {
        printf("%d는 홀수 입니다.\n", num);
    }

    return 0;
}

int AAA(void) {
    int num;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    return num;
}