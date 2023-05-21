/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 11번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	
	//비트 연산을 위한 변수, 결과값 저장 변수 선언  
	unsigned int data=1, result=0;
	
	//반복횟수 체크용 변수 선언
	int i=0;  
	
	//32비트 이므로 한 비트씩 좌측으로 옮기는 비트연산을 32번 반복 
	for(i ; i<32 ; i++){
		//결과값은 비트 연산을 완료한 값으로 대입 
		result=data;
		printf("%2d번 비트만 1인 값: %08x %d\n", i, result, result);
		
		//i번째 비트만 1인 data를 만들기 위해 비트연산 수행 
		data<<=1;	
	}
	return 0;
}