/* 
작성날짜: 2023.05.21
과제 : C언어 Chapter6 Programming Assignment 06번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

//메뉴 선택 함수 선언
int choose_menu(void);

int main(void){
    //메뉴 변수 선언
    int menu = 0;

    //choose_menu함수 return 값 메뉴 번호 대입
    menu = choose_menu();

    //메뉴 번호에 따른 수행 결과 출력
    switch (menu)
    {
    case 0 :
        printf("프로그램을 종료합니다.\n");
        break;
    case 1 :
        printf("파일 열기를 수행합니다.\n");
        break;
    case 2 :
        printf("파일 저장을 수행합니다.\n");
        break;
    case 3 :
        printf("파일 인쇄를 수행합니다.\n");
        break;
    }

    return 0;
}

//메뉴 선택 함수 정의
int choose_menu(void){
    //메뉴 변수 선언
    int menu = 0;

    //메뉴가 0~3이 아닌 경우 다시 선택 하는 반복문
    while(1){
        //메뉴 출력 및 입력
        printf("[1.파일열기 2.파일저장  3.인쇄  0.종료] 선택? ");
        scanf("%d", &menu);

        //메뉴가 0~3인 경우 반복문 탈출 
        if(menu > 0 && menu < 4)
            break;
    }

    //메뉴 return
    return menu;
}