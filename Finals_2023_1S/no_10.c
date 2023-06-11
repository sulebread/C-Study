#include <stdio.h>
int num = 0;

void Testlocal(void){
    printf("num = %d ", num++);
}

int main(void){
    Testlocal();
    Testlocal();
    Testlocal();

    return 0;
}