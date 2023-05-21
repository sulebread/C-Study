/* 
작성날짜: 2023.05.21
과제 : C언어 Chapter6 Programming Assignment 11번 
숭실대학교 글로벌미래교육원 컴퓨터공학 1학년 
20234236 방한경 
*/

#include <stdio.h>

//계산기 함수 선언
float calculator(float, float, char);

int main(void){
    //연산자, 피연산자, 결과 변수선언
    float num1 = 0, num2 = 0, result = 0;
    char op = 0;

    //0 0 0 입력 전까지 사칙연산하는 반복문
    while(1){
        //수식입력
        printf("수식 (0 0 0 입력 시 종료)? ");
        scanf("%f %c %f", &num1, &op, &num2);

        //0 0 0 인 경우 프로그램 종료
        if(num1 == 0 && num2 == 0 && op == '0')
            break;
        
        //사칙연산자를 입력하는 경우
        if(op == '+' || op == '-' || op == '*' || op == '/'){
            if(op == '/' && num2 == 0){
                //0으로 나누기 불가
                printf("0으로 나눌 수 없습니다.\n");
            }else{
                //calculator 함수 return값 대입하여 계산 결과 출력
                result = calculator(num1, num2, op);
                printf("%f\n", result); 
            }
        }else{ 
            //사칙연산자 외 연산자를 입력하는 경우
            printf("지원하지 않는 연산자 입니다.\n");
        }
    }

    return 0;
}

//계산기 함수
float calculator(float num1, float num2, char op){
    //결과 변수 선언
    float result = 0;

    //사칙연산자에 따른 계산
    switch (op)
    {
        case '+' :
            result = num1 + num2;     
            break;
        case '-' :
            result = num1 - num2;     
            break;
        case '*' :
            result = num1 * num2;     
            break;
        case '/' :
            result = num1 / num2;     
            break;   
    }

    //결과값 return
    return result;
}