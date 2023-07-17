#include <stdio.h>

int main(void){
	int i, j, n;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++)
			printf("*");
		for(j = 0; j < 2 * (n - i); j++)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	for(i = n - 1; i >= 1; i--){
		for(j = 0; j < i; j++)
			printf("*");
		for(j = 0; j < 2 * (n - i); j++)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
