#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20

int is_equal_array(int source[], int target[], int size);

int main(void)
{
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int res = 0;

    srand((unsigned int)time(NULL));

    //배열 채우기
    for(i = 0; i < ARR_SIZE; i++)
        arr1[i] = rand() % 100;

    //2진 파일로 arr1에 저장
    printf("파일이름? ");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';

    //2진 파일에 대한 출력 스트림 열기
    fout = fopen(filename, "wb");
    if(fout == NULL)
    {
        printf("출력용 파일 열기 실패\n");
        return 1;
    }

    //arr1 배열 내용 저장
    fwrite(arr1, sizeof(arr1[0]), ARR_SIZE, fout);
    fclose(fout);
    fout = NULL;

    //2진 파일을 arr2로 읽어오기
    fin = fopen(filename, "rb");
    if(fin == NULL)
    {
        printf("입력용 파일 열기 실패\n");
        return 1;
    }

    fread(arr2, sizeof(arr2[0]), ARR_SIZE, fin);
    fclose(fin);
    fin = NULL;

    //arr1, arr2 비교
    if(is_equal_array(arr1, arr2, ARR_SIZE))
    {
        printf("2진 파일 입출력 성공\n");
        for(int i = 0; i < ARR_SIZE; i++){
            printf("arr1[%02d]: %02d    arr2[%02d]: %02d\n", i, arr1[i], i, arr2[i]);
        }
    }
    else
    {
        printf("2진 파일 입출력 실패\n");
    }

    return 0;
}

int is_equal_array(int source[], int target[], int size)
{
    int i;
    for(i = 0; i < ARR_SIZE; i++)
    {
        if(target[i] != source[i])
            return 0;
    }

    return 1;
}