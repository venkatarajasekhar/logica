#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	float kwh=0,total=0,totalICMS=0,porcentagem=0,valorICMS=0;
	
	printf("kWh consumidos: ");
	scanf("%f", &kwh);	
	
	if(kwh <= 100) {
		total = kwh * 0.08;
	}
	
	if(kwh >= 101 && kwh <= 200){	
		total = kwh * 0.10;
	}
	
	if(kwh >= 201 && kwh <= 500){		
		total = kwh * 0.12;
	}
	
	if(kwh > 500){
	   total = kwh * 0.12;
	}
	  
	totalICMS =  total + (0.18 * total);	
	valorICMS = totalICMS - total;
	
	printf("Valor Consumido: %5.2f \n", total);
	printf("Valor a ser pago: %5.2f \n", totalICMS);
	printf("Valor ICMS: %5.2f \n", valorICMS);
	
	
	
}
