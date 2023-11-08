#include <stdio.h>

//제품정보 구조체 정의
typedef struct product
{
    char name[20];
    int price;
    int stock;
} PRODUCT;

int orderProduct(PRODUCT *pt, int orderCount);

int main(void){
    //주문수량, 가격 변수 선언
    int orderCount, price;

    //구조체변수 선언
    PRODUCT pt;

    //제품정보입력
    printf("제품명? ");
    scanf("%s", pt.name);
    
    printf("가격? ");
    scanf("%d", &pt.price);
    
    printf("재고? ");
    scanf("%d", &pt.stock);

    //주문수량 입력 반복문
    while(1){
        //주문수량입력
        printf("주문수량? ");
        scanf("%d", &orderCount);
        
        //주문수량이 0인경우 반복문 탈출
        if(orderCount == 0)
            break;

        //결제금액 리턴받음
        price = orderProduct(&pt, orderCount);

        //결제가 가능한 경우 결제금액, 재고 출력
        if(price){
            printf("결제 금액: %d   재고: %d\n", price, pt.stock);
        }else{
            //결제금액이 0인경우 재고 부족 출력
            printf("재고가 부족합니다.\n");
        }
    }

    return 0;
}

//재고 계산하여 결제금액 리턴하는 함수
int orderProduct(PRODUCT *pt, int orderCount){
    //리턴할 결제금액
    int totalPrice;

    //재고와 주문수량 비교
    if(pt->stock >= orderCount){
        //재고가 많은 경우 재고 차감
        pt->stock -= orderCount;

        //결제금액 계산
        totalPrice = pt->price * orderCount;
        
        return totalPrice; 
    }else{
        //재고가 주문수량보다 적은경우
        return 0;
    }
}
