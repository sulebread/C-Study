#include <stdio.h>
#define SIZE 5

void copy_arr(int arr[], int arr2[], int size);

int main() {
    int A[SIZE] = {10, 20, 30, 40, 50};
    int B[SIZE];
    
    copy_arr(A, B, SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("A[%d] = %d  B[%d] = %d\n", i, A[i], i, B[i]);
    }

    return 0;
}

//배열복사 함수
void copy_arr(int arr[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[i];
    }
}
