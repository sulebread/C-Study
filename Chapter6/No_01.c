/* 
작성날짜: 2023.05.21
과제 : C언어 Chapter6 Programming Assignment 01번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int get_perimeter(int, int);

int main(void){
    int width = 0, height = 0;
    
    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    get_perimeter(width, height);

    return 0;
}

int get_perimeter(int width, int height){
    int perimeter = 0;

    perimeter = (width + height) * 2;
    
    printf("직사각형의 둘레: %d\n", perimeter);

    return perimeter;
}