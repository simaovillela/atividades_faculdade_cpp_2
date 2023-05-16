/*
 Desenvolva um programa em C que leia três
 arestas de um triângulo e o classifique quanto
 Isosceles, escaleno e equilátero:
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
