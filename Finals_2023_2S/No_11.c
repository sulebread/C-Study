#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *join_string(const char* str1, const char* str2);

int main(void) {
    char str1[100] = "";
    char str2[100] = "";

    //입력받기
    printf("첫 번째 문자열? ");
    fgets(str1, sizeof(str1), stdin);
    printf("두 번째 문자열? ");
    fgets(str2, sizeof(str2), stdin);
    
    //줄바꿈 문자 삭제
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    //함수호출
    char *result = join_string(str1, str2);
    puts(result);

    //메모리 해제
    free(result); 
    result = 0;

    return 0;
}

char *join_string(const char* str1, const char* str2) {
    //문자열 길이 구하기
    int len = strlen(str1) + strlen(str2);
    
    //문자열길이 만큼 동적 메모리 할당하기
    char *result = (char *)malloc(len + 1);

    //문자열 합치기
    strcpy(result, str1);
    strcat(result, str2);

    return result;
}
