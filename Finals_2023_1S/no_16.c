#include <stdio.h>
#define SIZE 5

int total(int arr[], int);
float avg(int arr[], int);

int main() { 
    int arr_score[SIZE];
    int num_total;
    float num_avg;

    for (int i = 0; i < SIZE; i++) {
        printf("%d 번째 정수 입력 : ", (i + 1));
        scanf("%d", &arr_score[i]);
    }

    num_total = total(arr_score, SIZE);
    num_avg = avg(arr_score, SIZE);

    printf("정수의 총합 : %d\n", num_total);
    printf("정수의 평균 : %.2f\n", num_avg);

    return 0;
}

//총합 구하기 함수
int total(int arr[], int size) {
    int num_total;

    for (int i = 0; i < size; i++)
        num_total += arr[i];
    
    return num_total;
}

//평균 구하기 함수
float avg(int arr[], int size) {
    float num_avg, num_sum; //평균 실수 형태로 구하기 위해서 합계도 float으로 받아야함.

    for (int i = 0; i < size; i++) 
        num_sum += arr[i];
    
    num_avg = num_sum / size;
    printf("%f", num_avg);

    return num_avg;
}