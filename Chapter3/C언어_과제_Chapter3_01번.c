/* 
작성날짜: 2023.04.04
과제 : C언어 Chapter3 Programming Assignment 01번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

//함수선언 
float GetArea(float);
float GetPerimeter(float);

int main(void){ 
	float side=0;
	printf("한 변의 길이? ");
	scanf("%f", &side);
	
	//함수로 넓이,둘레 구해서 변수 대입 
	float area = GetArea(side); 
	float perimeter = GetPerimeter(side);
	
	printf("정사각형의 넓이: %.2f\n", area);
	printf("정사각형의 둘레: %.2f\n", perimeter);	 
}

//넓이 구하기 
float GetArea(float side){
	float area = side * side;
	return area;
}

//둘레 구하기 
float GetPerimeter(float side){
	const float SIDE_COUNT = 4;
	float perimeter = side*SIDE_COUNT;
	return perimeter;
}