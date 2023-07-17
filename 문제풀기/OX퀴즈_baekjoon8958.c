#include <stdio.h>

int main(void){
    int n;
    int sum = 0;
    int times = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char arr[80];
        scanf("%s", arr);

        for(int j = 0; j < 80; j++){
            if(arr[j] == 'O'){
                times++;
            }else if(arr[j] == 'X'){
                for(int k = 1; k <= times; k++)
                    sum += k;
                times = 0;
            }else{
                break;
            }
        }
        if(times != 0)
            for(int k = 1; k <= times; k++)
                sum += k;

        printf("%d\n", sum);
        sum = 0;
        times = 0;
    }

    return 0;
}