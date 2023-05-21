/* 
작성날짜: 2023.04.20
과제 : C언어 Chapter4 Programming Assignment 1번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	//변수선언 
	float mass=0, speed=0, energy=0;
	
	//질량입력 
	printf("질량(kg)? ");
	scanf("%f",&mass);
	
	//속력입력 
	printf("속력(m/s)? ");
	scanf("%f", &speed);
	
	//에너지계산 
	energy=0.5*mass*speed*speed;
	printf("운동에너지: %.2f J\n", energy);
	
	return 0;
}