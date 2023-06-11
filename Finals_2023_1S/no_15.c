#include <stdio.h>

int max(int, int, int);

int main() {
    int num1, num2, num3, max_num;

    printf("비교할 정수 3개 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max_num = max(num1, num2, num3);
    printf("가장 큰 정수는 %d ", max_num);

    return 0;
}

int max(int num1, int num2, int num3) {
    int max_num = num1 > num2 ? num1 : num2;
    max_num = max_num > num3 ? max_num : num3;

    return max_num;
}
