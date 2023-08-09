#include <stdio.h>

int check(char arr[]);

int main(void){
    while(1){
        char arr[5] = {0,};
        int result;
        
        scanf("%s", arr);

        if(arr[0] == '0')
            break;

        result = check(arr);       
        
        if(result == 0)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}

int check(char arr[]){
    int index = 4;

    for(int i = 4; i >= 0; i--){
        if(arr[i] == 0)
            index--;
        else
            break;
    }

    for(int i = 0; i <= index; i++){
        if(arr[i] != arr[index - i]){
            return 0;
        }
    }

    return 1;
}