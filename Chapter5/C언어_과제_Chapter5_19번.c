/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 19번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	//기본출연료, 러닝개런티, 총 출연료 변수 선언 
	int defaultFee=0, runningGuarantee=0, totalFee=0;
	
	//손익 분기점 관객수, 예상 관객수 변수 선언 
	int bePointAudience=0, audience=0; 
	int i=1;
	
	//기본 출연료 입력 
	printf("기본 출연료? ");
	scanf("%d", &defaultFee);
	
	//손익 분기점 관객 수 입력 
	printf("손익 분기점 관객 수? ");
	scanf("%d", &bePointAudience);
	
	//러닝 개런티 입력 
	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &runningGuarantee);
	
	//예상 관객수에 따른 예상 출연료 계산 
	for(i ; i<16 ; i++){
		audience = 1000000*i;
		
		//예상 관객수가 손익 분기점 관객 수 보다 많은 경우 
		if((audience-bePointAudience)>0){
			totalFee = defaultFee+(audience-bePointAudience)*runningGuarantee;
		}
		else{
		//예상 관객수가 손익 분기점 관객 수 보다 작은 경우 기본 출연료만 지급 
			totalFee = defaultFee;
		}
		printf("관객 %8d명 일 때 예상 출연료: %d원\n", audience, totalFee);
	}
	
	return 0;
}

