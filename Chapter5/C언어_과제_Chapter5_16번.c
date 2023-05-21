/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 16번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	
	//정수, 배수 개수 변수 선언 
	int num=0, count=0;
	int i=1;
	
	//양의 정수 입력 
	printf("양의 정수? ");
	scanf("%d", &num);
	
	//배수의 개수 입력 
	printf("배수의 개수? ");
	scanf("%d", &count);
	
	//입력한 배수의 개수만큼 반복문 실행 및 배수 계산 
	for(i ; i<=count ; i++ ){
		printf("%d\n", num*i);
	} 
	
	return 0;	
}