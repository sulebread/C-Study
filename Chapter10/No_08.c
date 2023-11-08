#include <stdio.h>

//제품정보 구조체 정의
typedef struct product
{
    char name[20];
    int price;
    int stock;
} PRODUCT;

void print_product(PRODUCT pt);

int main(void){
    //구조체변수 선언
    PRODUCT pt;

    //제품정보입력
    printf("제품명? ");
    scanf("%s", pt.name);
    
    printf("가격? ");
    scanf("%d", &pt.price);
    
    printf("재고? ");
    scanf("%d", &pt.stock);

    print_product(pt);

    return 0;
}

//구조체를 매개변수로 받는 함수
void print_product(PRODUCT pt){
    //제품정보 출력
    printf("[%s %d원 재고:%d]", pt.name, pt.price, pt.stock);
}