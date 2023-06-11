#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int i;
    
    //잘못된 부분 : 배열의 이름은 배열의 시작 주소값을 가지고 있는 값으로 다른 배열의 주소를 대입할 수 없다.
    //포인터 상수 ?
    //brr = arr;

    //배열복사
    for(i = 0; i < 5; i++)
        brr[i] = arr[i];

    //배열출력
    for(i = 0; i < 5; i++)
        printf("%d %d \n", arr[i], brr[i]);

    return 0;
}