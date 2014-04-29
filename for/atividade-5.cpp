#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int i,numero=0;
		
	printf("Digite um numero inteiro:");
	scanf("%d",&numero);
		
	for(i=1;i<=10;i++){
		
		printf("%d x %d = %d \n", i, numero, (i * numero));
		
	}
	
	
}
