/* 
작성날짜: 2023.04.20
과제 : C언어 Chapter4 Programming Assignment 11번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	//변수선언
	int price=0, salePrice=0, discountRate=0, discountPrice=0;
	
	//제품가격 입력 
	printf("제품의 가격? ");
	scanf("%d",&price);
	
	//할인율 입력 
	printf("할인율(%%)? ");
	scanf("%d", &discountRate);
	
	//할인가격 계산 
	salePrice=price*(100-discountRate)*0.01;
	discountPrice=price-salePrice;
	printf("할인가: %d원(%d원 할인)", salePrice, discountPrice);
	
	return 0;
}