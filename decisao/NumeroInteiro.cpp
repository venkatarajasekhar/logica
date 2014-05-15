#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float verificaNumero(int numero){
	
	if(numero >= 0){
		
		if ((numero % 2) == 0){
			 printf ("O numero %d e par\n", numero);
		} else {
			printf("O numero %d e impar",numero);
		}
		
		
	} else {
		printf("\nO numero %d e negativo", numero);
	}
	
	
}

int main(){
	
	int numero = 0;
	printf("\n Digite um valor:");
	scanf("%d",&numero);
	
	verificaNumero(numero);
	
	getch();
}
