#include <stdio.h>

//포인터로 값을 전달 받을 수 있는 함수 선언
void get_rect_info(int *width, int *height);

int main(void){
    int width, height;

    //가로입력
    printf("가로? ");
    scanf("%d", &width);
    
    //세로입력
    printf("세로? ");
    scanf("%d", &height);

    //가로, 세로 주소값 전달
    get_rect_info(&width, &height);

    return 0;    
}

void get_rect_info(int *width, int *height){
    int area, round;

    //각 변수의 주소에 담겨있는 값으로 넓이, 둘레 계산
    area = *width * *height;
    round = (*width + *height) * 2;

    printf("넓이: %d, 둘레: %d", area, round);
}