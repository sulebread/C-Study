#include <stdio.h>
#define SIZE 10

//포인터변수로 배열을 받는 함수 정의
void arith_seq(int *arr, int size, int commonDifference);
void printArr(int *arr, int size);

int main(void){
    int arr[SIZE];
    int commonDifference;

    //수열의 첫 번째 항 입력
    printf("첫 번째 항? ");
    scanf("%d", &arr[0]);

    //공차입력
    printf("공차? ");
    scanf("%d", &commonDifference);
    
    //등차수열로 배열 채우는 함수 호출
    arith_seq(arr, SIZE, commonDifference);
    
    //배열 출력 함수
    printArr(arr, SIZE);

    return 0;
}

void arith_seq(int *arr, int size, int commonDifference){
    //등차수열 채우기
    for(int i = 0; i < size - 1; i++){
        arr[i + 1] = arr[i] + commonDifference;
    }
}

void printArr(int *arr, int size){
    printf("등차수열 : ");
    for(int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
}

