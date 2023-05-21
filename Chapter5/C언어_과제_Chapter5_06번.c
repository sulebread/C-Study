/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 6번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>
#define PY 0.3025
#define METER 3.305785

int main(void){
	
	//면적, 변환 면적, 단위 입력 변수 선언 
	float area=0, conversion=0;
	char unit;
	
	//넓이, 단위 입력 
	printf("넓이, 단위? ");
	scanf("%f %c", &area, &unit);
	
	//입력단위에 따른 면적단위 변환 
	if(unit=='m'){
		conversion=area*PY;
		printf("%.2f 제곱미터 == %.2f 평", area, conversion);
	}else if(unit=='p'){
		conversion=area*METER;
		printf("%.2f 평 == %.2f 제곱미터", area, conversion);
	}
	
	return 0;
}