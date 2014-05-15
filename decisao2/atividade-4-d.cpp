#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


float calcularMedia(float notas[4]){
	
	float soma = notas[0] + notas[1] + notas[2] + notas[3];
	float media = soma / 4;
	
	if(media >= 7){
		printf("Aqui voce esta aprovado, vamos ver na etec, sua media foi %f", media);
	} else {
		printf("Voce foi reprovado, sua media foi %f", media);
	}
	
}


int main(){
	float nota1,nota2,nota3,nota4;
	printf("Digite a 1 nota:");
	scanf("%f",&nota1);
	printf("Digite a 2 nota:");
	scanf("%f",&nota2);
	printf("Digite a 3 nota:");
	scanf("%f",&nota3);
	printf("Digite a 4 nota:");
	scanf("%f",&nota4);
	
    float notas[4] = {nota1, nota2, nota3, nota4}; 
	
	calcularMedia(notas);
	
}
