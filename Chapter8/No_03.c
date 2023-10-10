#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

//포인터변수로 배열의 원소값 출력하는 함수 선언
void printAsc(int *arr, int size);
void printDesc(int *arr, int size);

int main(void){
    int arr[SIZE];

    //랜덤으로 배열 초기화
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        arr[i] = (rand() % 100);
    }

    //배열 출력함수 호출
    printAsc(arr, SIZE);
    printDesc(arr, SIZE);
}

//정순으로 배열 출력
void printAsc(int *arr, int size){
    printf("arr : ");

    for(int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }

    printf("\n");
}

//역순으로 배열 출력
void printDesc(int *arr, int size){
    printf("arr역순 : ");

    for(int i = size; i >= 0; i--){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}