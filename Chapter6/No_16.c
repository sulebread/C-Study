/* 
작성날짜: 2023.05.21
과제 : C언어 Chapter6 Programming Assignment 16번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>
#define BITSIZE 32 //32비트 데이터

//위치별 비트 값 확인 함수 선언
int is_bit_set(int, int);

int main(void){
    //입력데이터, 데이터 비트위치, 비트 위치의 현재 값 변수 선언
    int data = 0, pos = 0, currentBit = 0;
    
    //데이터 입력
    printf("정수? ");
    scanf("%i", &data);

    //비트 위치 표현. 계산을 위해 데이터 비트 - 1 
    pos = BITSIZE - 1;

    //비트 위치 값 출력을 위한 반복문
    for(pos; pos >= 0; pos--){
        //currentBit 함수를 호출하여 비트 위치 값 대입
        currentBit = is_bit_set(data, pos);

        //정상적으로 return 받은 경우 현재 비트 위치 값 출력
        if(currentBit != -1)
            printf("%d", currentBit);
        else
            //-1을 return 받은 경우 에러메세지 출력
            printf("잘못된 값입니다.\n");
        //4비트당 공백 출력
        if(pos % 4 == 0)
            printf(" ");
    }
}

//위치별 비트 값 확인 함수 정의
int is_bit_set(int data, int pos){
    //현재 비트 위치의 값 저장을 위한 변수 선언
    int currentBit = 0;
    
    //현재 비트 위치의 값을 알아 내기 위한 마스크 변수 선언 및 대입
    //현재 비트 위치까지 1을 shift
    int mask = 1 << pos;

    //pos값이 비트 순서에 벗어나지 않는지 check
    if(pos >= 0 && pos < 32){
        //실제 데이터에 mask와 &연산하여 현재 비트 위치 데이터만 남김
        //현재 비트 위치에 데이터가 있는 경우 1, 그렇지 않은 경우 0
        currentBit = data & mask ? 1 : 0;
        
        //현재 비트 위치 데이터 return
        return currentBit;
    }else{
        //pos값이 비트 순서와 벗어난 경우 -1 return
        return -1;
    }
}