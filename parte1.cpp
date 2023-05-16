#include<stdio.h>
int main(){
	int x;
	printf("Informe um numero: ");
	scanf("%d", &x);
	if((x % 2) == 1){
		printf("\nO numero %d e impar! \n", x);
	}else if((x % 2) == 0){
		printf("\nO numero %d e par!", x);
	}
	
}

