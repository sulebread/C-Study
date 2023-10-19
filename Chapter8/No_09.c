#include <stdio.h>
#define ROW 4
#define COL 5

//배열채우기 함수
void fill_2d_array(int *arr, int row);

int main(void){
    int arr[ROW][COL];

    fill_2d_array(arr, ROW);
}

void fill_2d_array(int *arr, int row){
    int input;

    //TODO : &arr[0]; warning 발생지점 확인필요 ㅠ
    int (*p)[5] = arr;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &input);

    //배열채우기
    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < 5; j++){
            p[i][j] = input;
            printf("arr[%d][%d] 값 : %d\n", i, j, p[i][j]);
        }
    }
}