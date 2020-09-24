#include <stdio.h>
#include <conio.h>
#include <math.h>
int main (void){
	int n,quadrado;
	float raiz;
	printf("digite um numero inteiro positivo:");
	scanf("%d",&n);
	
	if(n>0){
		quadrado=n*n;
		
		raiz=sqrt(n);
		
		printf("este numero ao quadrado e igual a= %d e sua raiz e %.2f",quadrado,raiz);
	}
}
