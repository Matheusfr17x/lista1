#include <stdio.h>
#include <conio.h>
int main (void){
	int dia;
	
	printf("digite um dia de 1 a 7:\n");
	scanf("%d", &dia);
	
	switch(dia){
	
		case 1 : 
		printf ("domingo\n");
		break;
		
		case 2 :
		printf ("segunda\n");
		break;
		
		case 3 :
		printf ("terca\n");
		break;
		
		case 4 :
		printf ("quarta\n");
		break;
		
		case 5 :
		printf ("quinta\n");
		break;
		
		case 6 :
		printf ("sexta\n");
		break;
		
		case 7 :
		printf ("sabado \n");
		break;
		
	}
}
