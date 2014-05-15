#include<stdio.h>
#include<stdlib.h>


float calculo(char nome[50], float salario){
       	double percentual = 0;
	    
	    if(salario > 0 && salario <= 400){
	    	
	      percentual = 0.15;    
	      printf("fgdfd");
	    	
	    }
	    
	    if(salario >= 401 && salario <= 700){
	    	
	    	 percentual = 0.12;    
	    	
	    }
	    
	    if(salario >= 701 && salario <= 1000){
	    	
	    	percentual = 0.10;    
	    	
	    }
	    
	    if(salario >= 1001 && salario <= 1800){
	    	
	    	percentual = 0.7;    
	    	
	    }
	    
	    if(salario >= 1801 && salario <= 2500){
	    	
	    	percentual = 0.7;    
	    	
	    }
	    
	    if(salario > 2500){
	    	
	    	percentual = 0;    
	    	
	    }
	    
	    float valorFinal = salario + (percentual * salario);
		printf("%s %5.2f antigo salario: %5.2f novo salario: %5.2f",nome, percentual , salario ,valorFinal);
}




int main(){
	
	char nome[50] = "";
	float salario = 0;
	
	printf("Digite o valor do  salario: ");
	scanf("%f",&salario);
	printf("\nDigite o nome do funcionario: ");
	scanf("%s",&nome);
	
	calculo(nome, salario);

	
	
	
	
}
