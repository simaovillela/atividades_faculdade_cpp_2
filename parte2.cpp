#include<stdio.h>
int main(){
	int x;
	printf("Informe um numero: ");
	scanf("%d", &x);
	if((x % 3) == 0){
		printf("\ngaveta 1! \n");
	}else if((x % 3) == 1){
		printf("\ngaveta 2! \n");
	}else{
		printf("\ngaveta 3!");
	}
	
}
