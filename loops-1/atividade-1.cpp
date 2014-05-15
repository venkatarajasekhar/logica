#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	float i=0,valorHora=0, horasTrabalhadas=0, desconto=0,salario=0, salarioBruto=0;
	char continuar;
	
	printf("Calculo Salario\n");	
	
	while(i < 100){	
	
     	printf("Horas Trabalhadas:");
    	scanf("%f", &valorHora);
	
 		printf("Valor Hora:");
	
		scanf("%f", &horasTrabalhadas);
		printf("Desconto:");
	
		scanf("%f", &desconto);
	
		salarioBruto = valorHora * horasTrabalhadas;
		
		float porcentagem = desconto / 100;
	
   		salario = salarioBruto - (porcentagem * salarioBruto);  	
   		
   		desconto = salarioBruto - salario;   		
   		
		printf("Salario bruto: %5.2f \n", salarioBruto);		
	 	printf("Salario liquido: %5.2f \n", salario);
	 	printf("Desconto: %5.2f", desconto);
	 	
	 	printf("\n\nDeseja continuar S para sim N para nao:");
	 	scanf("%s", &continuar);
	 	
	 	continuar = tolower(continuar);
		
    	if(continuar == 'n'){
	 		break;
	 	}
		
   }
	
	
}

