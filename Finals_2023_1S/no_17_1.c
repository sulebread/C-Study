#include <stdio.h>

int main() {
    int A[5] = {10, 20, 30, 40, 50};
    int B[5];
    
    for (int i = 0; i < 5; i++) {
        B[i] = A[i];
        printf("A[%d] = %d  B[%d] = %d\n", i, A[i], i, B[i]);
    }

    return 0;
}