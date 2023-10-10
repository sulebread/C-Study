#include <stdio.h>

//배열의 주소를 인자로 받는 함수 선언
void printAddress(double *arr, int size);

int main(void){
    double arr[3] = {0, }; 
    int size = sizeof(arr)/sizeof(arr[0]);

    //배열이름(주소)와 사이즈를 함수로 전달
    printAddress(arr, size); 
 
    return 0;
}

void printAddress(double *arr, int size){
    //배열을 포인터처럼 사용하여 주소출력
    for(int i = 0; i < size; i++){
        printf("arr[%d]의 주소 : %X\n", i, arr + i);
    }
}