#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int i,incremento=0,soma=0,media=0;
	
	for(i=13;i<=73;i++){
		
		if((i % 2) == 0){
			printf("Par: %d \n",i);		
			incremento++;
			soma = soma + i;	
		}
		
	}
	
	media = soma / incremento;
	
	printf("A media e: %d", media);
	
}
