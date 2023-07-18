#include <stdio.h>

int main(void){
    int n, max = -1000001, min = 1000001;
    int arr[1000000] = {0,};

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        min = arr[i] < min ? arr[i] : min;
        max = arr[i] > max ? arr[i] : max;
    }

    printf("%d %d", min, max);

    return 0;
}