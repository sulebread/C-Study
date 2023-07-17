#include <stdio.h>

int main(void){
    char result = 0;
    char arr[1000000]= {'0',};
    int count[1000000] = {0,};

    //int count2[26] = {0,};

    scanf("%s", arr);

    for(int i = 0; i < 1000000; i++){
        for(int j = 0; j < 1000000; j++){
            if(arr[i] == arr[j] || arr[i] == arr[j] + 32 || arr[i] == arr[j] - 32){
                count[i]++;
            }
        }
    }

    for(int i = 0; i < 1000000; i++){
        if(count[i] > count[i+1])
            result = arr[i];
        else if(count[i] < count[i+1])
            result = arr[i+1];
        else if(count[i] == count[i+1])
            result = 63;
    }


    printf("%c", result);

    return 0;
}