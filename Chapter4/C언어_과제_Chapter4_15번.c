/* 
작성날짜: 2023.04.20
과제 : C언어 Chapter4 Programming Assignment 15번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

//환전수수료율 매크로상수 
#define EXCHANGE_RATE 0.0175

int main(void){
	//매매기준율, 환전우대율, 환율, 수수료  변수 선언 
	int tradingStandardRate=0;
	float primeRate=0, exchangeRate=0, charge=0;
	//금액 변수 선언 
	float usd=0, krw=0;
	
	//매매기준율, 환율우대율 입력 
	printf("원/달러 매매기준율? ");
	scanf("%d", &tradingStandardRate);
	
	printf("환율우대율(0~100%%)? ");
	scanf("%f", &primeRate);
	
	//환전 수수료계산 
	charge=tradingStandardRate*EXCHANGE_RATE*(1-(primeRate/100));
	
	//현찰 매입 환율 계산 
	exchangeRate=tradingStandardRate+charge;
	printf("달러 살 때 환율은 %f입니다.\n", exchangeRate);
	
	//구입금액 입력 
	printf("구입할 달러(USD)? ");
	scanf("%f", &usd);
	
	//환율계산 
	krw=usd*exchangeRate;
	printf("USD %.2f 살 때 ==> KRW %.2f", usd, krw);
	
	return 0;
}