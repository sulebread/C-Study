/* 
작성날짜: 2023.04.20
과제 : C언어 Chapter4 Programming Assignment 16번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main (void){
	//unsigned int 변수 선언 
	unsigned int red=0, green=0, blue=0, rgb=0;
	
	//색상코드 입력 
	printf("red? ");
	scanf("%d", &red);
	
	printf("green? ");
	scanf("%d", &green);
	
	printf("blue? ");
	scanf("%d", &blue);
	
	//rgb 비트연산, or 연산으로 계산 
	rgb= red | (green<<8) | (blue << 16);
	
	printf("RGB 트루컬러: %06X", rgb);
	
	return 0;
} 