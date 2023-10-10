#include <stdio.h>
#define ROW 4
#define COL 5

void fill_2d_array(int *arr, int row);

int main(void){
    int arr[4][5];

    fill_2d_array(arr, ROW);
}

void fill_2d_array(int *arr, int row){
    int input;
    int (*p)[5] = arr;//&arr[0]; //warning 발생지점 확인필요 ㅠ

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &input);

    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < 5; j++){
            p[i][j] = input;
            printf("arr[%d][%d] 값 : %d\n", i, j, p[i][j]);
        }
    }
}