#include <stdio.h>

int main(void){
    int i, j, k;

    for(i = 1; i <= 6; i++){
        //빈칸영역
        k = 6 - i;
        for(j = 0; j < k; j++)
            printf(" ");

        for(j = 0; j < i; j++)
            printf("#");
        
        printf("\n");
    }

    return 0;
}