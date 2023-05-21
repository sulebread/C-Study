/* 
작성날짜: 2023.04.20
과제 : C언어 Chapter4 Programming Assignment 6번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main(void){
	//좌표변수 선언 
	int x1=0, x2=0, y1=0, y2=0;
	float slope=0;
	
	//좌표1 입력 
	printf("한 점의 좌표 (x1, y1)?");
	scanf("%d %d", &x1, &y1);
	
	//좌표2 입력 
	printf("또 다른 점의 좌표(x2, y2)?");
	scanf("%d %d", &x2, &y2);
	
	//기울기 계산
	slope = (y2-y1)/(x2-x1);
	printf("직선의 기울기: %f\n",slope); 
	
	return 0;
}