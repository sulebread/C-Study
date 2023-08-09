#include <stdio.h>

int check(char arr[], char copyArr[], int index);

int main(void){
    while(1){
        char arr[5] = {0,};
        char copyArr[5] = {0,};
        int index = 4;
        int result;
        
        scanf("%s", arr);

        if(arr[0] == '0')
            break;

        for(int i = 4; i >= 0; i--){
            if(arr[i] == 0)
                index--;
            else
                break;
        }

        for (int i = index, j = 0; i >= 0; i--, j++){
            copyArr[j] = arr[i];
        }

        // printf("%d\n", index);

        // printf("arr : ");
        // for(int i = 0; i <= index; i++){
        //     printf("%c ", arr[i]);
        // }

        // printf("copy : ");
        // for(int i = 0; i <= index; i++){
        //     printf("%c ", copyArr[i]);
        // }
        
        result = check(arr, copyArr, index);       
        
        if(result == 0)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}

int check(char arr[], char copyArr[], int index){
    for(int i = 0; i <= index; i++){
        if(arr[i] != copyArr[i]){
            return 0;
        }
    }

    return 1;
}