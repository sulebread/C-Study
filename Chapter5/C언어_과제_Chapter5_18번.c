/* 
작성날짜: 2023.05.09
과제 : C언어 Chapter5 Programming Assignment 18번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>
#define MAXMINUTE 1440 //최대 주차 가능 시간 
#define DEFAULT 2000 //최초 30분 기본요금 
#define TENMIN 1000 //10분당 추가요금 
#define MAXFEE 25000 //하루 최대 요금 

int main(void){
	//주차시간, 요금 계산 입력변수 
	int parkingTime=0, fee=0;
	
	//무한루프 설정 
	while(1){
		//주차시간입력 
		printf("주차시간(분)? ");
		scanf("%d", &parkingTime);
		
		//주차시간 유효여부 검사 
		if(parkingTime>0 && parkingTime<=MAXMINUTE){
			//최초 30분 초과 여부 확인 
			if(parkingTime<=30){
				fee=DEFAULT;
			}else { 
				//10분단위로 주차한 경우 
				if((parkingTime-30)%10 == 0){
					fee=DEFAULT+((parkingTime-30)/10*TENMIN);
				}else{ 
				//10분 단위가 아닌 경우 요금  추가 
					fee=DEFAULT+((parkingTime-30)/10*TENMIN)+TENMIN;
				} 
			}
			
			//하루 최대 요금 확인 
			if(fee>MAXFEE){
				fee=MAXFEE;
			}
			printf("주자 요금: %d원\n", fee);
			
		}else if(parkingTime>MAXMINUTE){
		printf("주차시간은 24시간을 넘을 수 없습니다.\n");
		
		}else if(parkingTime==0)
		//주차시간이 0인 경우 반복문 탈출 
			break;
	}
	
	return 0; 
} 