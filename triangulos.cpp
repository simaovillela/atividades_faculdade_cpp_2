/*
 Desenvolva um programa em C que leia tr�s
 arestas de um tri�ngulo e o classifique quanto
 Isosceles, escaleno e equil�tero:
 */
   
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Informe 3 arestas.");
	printf("Informe a primeira aresta: ");
	scanf("%d", &a);
	printf("Informe a segunda aresta: ");
	scanf("%d", &b);
	printf("Informe a terceira aresta: ");
	scanf("%d", &c);
	
	if((a == b) and (b==c)){
		printf("\nO triangulo e equilatero");
	}else if((a == b) or(a == b) or (a == c)){
		printf("\nO triangulo e isosceles");
	}
	else{
		printf("\nO triangulo e escaleno.");
	}

}
