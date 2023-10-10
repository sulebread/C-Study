#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

//포인터변수로 배열의 원소값과 평균을 출력하는 함수 선언
void printArr(double *arr, int size);
void printAvg(double *arr, int size);

int main(void){
    double arr[SIZE];

    //랜덤실수로 배열 채우기
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        arr[i] = (float)(rand() % 100) / 5;
    }

    printArr(arr, SIZE);
    printAvg(arr, SIZE);

    return 0;
}

void printArr(double *arr, int size){
    printf("배열 : ");

    //배열 원소 출력
    for(int i = 0; i < size; i++){
        printf("%lf ", arr[i]);
    }

    printf("\n");
}

void printAvg(double *arr, int size){
    double sum, avg;

    //배열 원소 합계 계산
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    //배열 원소 평균 계산
    avg = sum / size;

    printf("평균 : %lf", avg);
}