#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


float calculoIRPF(float salario){
	
	float desconto = 0;
	
	if(salario <= 1000){
		desconto = 7;
	}
	if((salario > 1000) && (salario <= 1700)){
		desconto = 12;
	}
	if((salario > 1700) && (salario < 2500)){
		desconto = 20;
	}
	if(salario >= 2500){
		desconto = 27.5;
	}
		
   float porcentagem = desconto / 100;      	
   float acrescimo =  salario - porcentagem * salario ; 
   printf("Seu salario era de %5.2f mas agora e %5.2f",salario,acrescimo);
	
}


int main(){	

	float salario = 0;
	printf("Digite o valor do salario:");
	scanf("%f",&salario);
	
	calculoIRPF(salario);
	
	
}
