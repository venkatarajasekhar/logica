#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float calculo(float salario,float financiamento){
	
	if(financiamento <= 5 * salario){
     	printf("\nFinanciamento concedido!");
	} else{
		printf("\nFinanciamento nao concedido!");
	}
	
	printf("\nObrigado por nos consultar.");
}



int main(){
	
	float salario = 0, financiamento = 0;
	printf("\nDigite o valor do salario:");
	scanf("%d",&salario);
 
   	printf("\nDigite o valor do financiamento:");
	scanf("%d",&financiamento);	
	
	calculo(salario,financiamento);
	
	getch();
}
