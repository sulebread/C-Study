#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void get_min_max(int *arr, int size);
void printArr(int *arr, int size);

int main(void){
    int arr[SIZE];
    
    //랜덤으로 배열 채우기
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        arr[i] = rand() % 100;
    }

    //배열출력
    printArr(arr, SIZE);
    
    //최댓값과 최솟값 찾는 함수 호출
    get_min_max(arr, SIZE);

    return 0;
}

void get_min_max(int *arr, int size){
    int min = arr[0];
    int max = arr[0];

    //최댓값과 최솟값찾기
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    //최댓값과 최솟값 출력
    printf("최댓값 : %d\n", max);
    printf("최솟값 : %d\n", min);
}

//배열출력
void printArr(int *arr, int size){
    printf("배열 : ");

    for(int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }

    printf("\n");
}