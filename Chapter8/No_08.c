#include <stdio.h>
#define SIZE 20

//포인터 변수로 배열을 받는 함수 정의
void fill_array(int *arr, int size, int fillValue);
void printArr(int *arr, int size);

int main(void){
    int array[SIZE];
    int fillValue;

    //배열값 입력받기
    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &fillValue);

    fill_array(array, SIZE, fillValue);    //배열채우기 함수 호출
    printArr(array, SIZE);  //배열출력
}

//배열채우기
void fill_array(int *arr, int size, int fillValue){
    for(int i = 0; i < size; i++){
        arr[i] = fillValue;
    }
}

//배열출력
void printArr(int *arr, int size){
    printf("배열 : ");

    for(int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }

    printf("\n");
}