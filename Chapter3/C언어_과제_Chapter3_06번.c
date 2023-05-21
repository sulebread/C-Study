/* 
작성날짜: 2023.04.04
과제 : C언어 Chapter3 Programming Assignment 06번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>
#define PY 0.3025 //매크로 상수 사용 

//평수구하기 
float GetPyeong(float area){
	float pyeong = area*PY;
	return pyeong;
}

int main(void){
	float area;
	
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &area);
	 
	printf("%.2f 제곱미터 = %.2f 평", area, GetPyeong(area)); 
	
	return 0; 
}




