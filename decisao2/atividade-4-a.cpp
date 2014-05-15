#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int verificaNumero(int numero){
		
   if(numero >= 100){		
		return true;		
	} else {
		return false;
	}	
	
}

int main(){
	
	int numero = 0;
	printf("Digite um numero inteiro:");
	
	scanf("%d", &numero);	
	
	if(verificaNumero(numero)){
		printf("\n Voce digitou o numeor %d portando ele e maior que 100.",numero);
	}else {
		printf("\n Voce digitou o numeor %d portando ele e menor que 100.",numero);
	}	
	
	
}
