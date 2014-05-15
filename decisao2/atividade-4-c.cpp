#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int pesoIdeal(float altura, char sexo[20]){
	
	float numeroQueNaoSeiOnome = 0, numeroQueNaoSeiOnome2 = 0, calculo = 0;
	
	
	if((strcmp(sexo, "m") == 0) || (strcmp(sexo, "M") == 0)) {
	
		numeroQueNaoSeiOnome = 44.7;
		numeroQueNaoSeiOnome2 = 62.1;
		sexo = "mulher";
		
	} else {
		
		numeroQueNaoSeiOnome = 58;
		numeroQueNaoSeiOnome2 = 72.7;
		sexo = "homem";
	}
	
	
	calculo = (numeroQueNaoSeiOnome2 * altura) - numeroQueNaoSeiOnome;	
	printf("acho que voce e %s e seu peso ideal e %5.3f", sexo,calculo);
	
}


int main(){
	float altura;
	char sexo[20] = "";
	
	printf("Digite sua altura:");
	scanf("%f",&altura);
	
	printf("Sexo, M para mulher ou H para homem:");
	scanf("%s",&sexo);
	
	pesoIdeal(altura, sexo);
	
	
	
}


