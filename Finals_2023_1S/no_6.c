#include <stdio.h>

int input(void);
int sum(int); //빈칸A영역

int main(void){
    int num;
    
    printf("한 개의 정수를 입력하세요 : ");
    num = input();

    printf("%d 까지의 합계 : %d\n", num, sum(num));

    return 0;
}

int input(void){
    int num;
    scanf("%d", &num);

    //빈칸B영역
    return num;
}

int sum(int a){
    int i, hap = 0;

    for(i = 1; i <= a; i++)
        hap += i;
    
    return hap;
}