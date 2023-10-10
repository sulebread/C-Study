#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

//포인터변수로 배열을 받는 함수 정의
void reverse_array(double *arr, int size);
void printArr(double *arr, int size);

int main(void){
    double arr[SIZE];
    int arr2[SIZE];

    //랜덤실수로 배열 채우기
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        arr[i] = (double)(rand() % 100) / 3;
    }

    printArr(arr, SIZE); //현재배열 출력
    reverse_array(arr, SIZE); //배열 뒤집기
    printArr(arr, SIZE); //역배열 출력

    return 0;
}

//배열 뒤집기
void reverse_array(double *arr, int size){
    for(int i = 0; i < (size / 2); i++){
        double tmp = arr[i];

        arr[i] = arr[size - (i + 1)];
        arr[size - (i + 1)] = tmp; 
    }
}

//배열출력
void printArr(double *arr, int size){
    printf("배열 : ");

    for(int i = 0; i < size; i++){
        printf("%lf  ", arr[i]);
    }

    printf("\n");
}