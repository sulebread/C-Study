#include <stdio.h>

void Testlocal(void){
    int num = 0;

    printf("num = %d ", num++);
}

int main(void){
    Testlocal();
    Testlocal();
    Testlocal();

    return 0;
}