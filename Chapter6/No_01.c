/* 
작성날짜: 2023.05.21
과제 : C언어 Chapter6 Programming Assignment 01번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

//둘레계산 함수선언
int get_perimeter(int, int);

int main(void){
    //가로, 세로, 둘레 변수 선언
    int width = 0, height = 0, perimeter=0;
    
    //가로, 세로 값 입력
    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    //둘레 계산 함수 호출 하여 대입
    perimeter = get_perimeter(width, height);

    //둘레 출력
    printf("직사각형의 둘레: %d\n", perimeter);

    return 0;
}

//둘레계산 함수 정의
int get_perimeter(int width, int height){
    //둘레 변수 선언
    int perimeter = 0;

    //둘레 계산
    perimeter = (width + height) * 2;

    //둘레값 return
    return perimeter;
}