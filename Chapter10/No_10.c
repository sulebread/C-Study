#include <stdio.h>
#include <string.h>

//제품정보 구조체 정의
typedef struct product
{
    char name[20];
    int price;
    int stock;
} PRODUCT;

void print_product(PRODUCT pt);

int main(void){
    int index;
    //구조체변수 선언
    PRODUCT pt[5];

    for(index = 0; index < 5; index++){
        //제품정보입력
        printf("제품명? ");
        scanf("%s", pt[index].name);
        
        //제품명 . 입력한 경우 제품정보 입력 종료
        if(strcmp(pt[index].name, ".") == 0){
            break;
        }
        
        printf("가격 재고? ");
        scanf("%d %d", &pt[index].price, &pt[index].stock);
    }

    //입력된 제품정보 출력
    for(int i = 0; i < index; i++){
        print_product(pt[i]);
    }

    return 0;
}

//구조체를 매개변수로 받는 함수
void print_product(PRODUCT pt){
    //제품정보 출력
    printf("[%s %d원 재고:%d]\n", pt.name, pt.price, pt.stock);
}