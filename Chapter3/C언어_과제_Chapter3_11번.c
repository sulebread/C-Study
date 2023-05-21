/* 
작성날짜: 2023.04.04
과제 : C언어 Chapter3 Programming Assignment 11번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	int krw=0;
	float exchangeRate=0;
	
	//원화입력 
	printf("KRW? ");
	scanf("%d", &krw);
	
	//환율입력 
	printf("원/달러 환율? ");
	scanf("%f", &exchangeRate);
	
	//원달러 계산 
	printf("KRW %d = USD %.2f", krw, krw/exchangeRate);
	return 0;
} 
