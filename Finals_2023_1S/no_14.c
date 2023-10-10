#include <stdio.h>

int main(void){
    int gugu[9][9] = {0};
    int i = 0;

    //각 단의 * 1 부터 출력
    while ((i + 1) < 10) {
        int j = 0;

        //곱해지는 수 (구구단의 단) 반복하여 증가
        while ((j + 2) < 10) {
            gugu[j][i] = (j + 2) * (i + 1);
            printf("%d * %d = %d\t\t", (j + 2), (i + 1), gugu[j][i]);
            j++;
        }

        printf("\n");
        i++;
    }
    
    return 0;
}