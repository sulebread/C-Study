/* 
작성날짜: 2023.03.26
과제 : C언어 Chapter2 Programming Assignment 11번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){

	float pi_f=3.14159265;
	double pi_d=3.14159265;
	
	//float형 출력 
	printf("입력:float, 출력:float형 파이 출력\n");
	printf("%.2f\n", pi_f);
	printf("%.4f\n", pi_f);
	printf("%.6f\n", pi_f);
	printf("%.8f\n", pi_f);
	printf("%e\n\n", pi_f);
	
	printf("입력:float, 출력:double형파이 출력\n");
	printf("%.2lf\n", pi_f);
	printf("%.4lf\n", pi_f);
	printf("%.6lf\n", pi_f);
	printf("%.8lf\n", pi_f);
	printf("%e\n\n", pi_f);
	

	//double형 출력 
	printf("입력:double, 출력:float형 파이 출력\n");
	printf("%.2f\n", pi_d);
	printf("%.4f\n", pi_d);
	printf("%.6f\n", pi_d);
	printf("%.8f\n", pi_d);
	printf("%e\n\n", pi_d);
	
	printf("입력:double, 출력:double형 파이 출력\n");
	printf("%.2lf\n", pi_d);
	printf("%.4lf\n", pi_d);
	printf("%.6lf\n", pi_d);
	printf("%.8lf\n", pi_d);
	printf("%e\n\n", pi_d);
	
	
	return 0; 
}