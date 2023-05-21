/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 1번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

int main (void){

	int left=0, top=0, right=0, bottom=0;	//좌상단, 우하단 좌표 입력 변수 선언 
	int x=0, y=0;	//점의 좌표 
	
	//선택 영역 좌상단점 좌표입력
	printf("선택 영역의 좌상단점(left, top)? ");
	scanf("%d %d", &left, &top);
	
	//선택 영역 우하단점 좌표입력
	printf("선택 영역의 우하단점(right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	
	//점 좌표 입력
	printf("점의 좌표(x, y)? ");
	scanf("%d %d", &x, &y);
	
	//영역 내 포함여부 검사. x좌표 검사 후 y좌표 검사. 
	if(x>=left && x<=right){
		if(y>=top && y<=bottom){
			printf("직사각형 모양의 선택 영역 내의 점입니다.");
		}
		else{
			printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");
		}
	}
	else{
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");
	}
	
	return 0; 
}