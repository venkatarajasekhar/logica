#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


 float verificaNota(int nota){
 	
 	if(nota <= 3){
 		printf("Conceito E:");
 	}
    if (nota > 3 && nota <= 5){
 		printf("Conceito D:");
 	}
    if (nota > 7 && nota <= 7){
 		printf("Conceito C:");
 	}
 	if (nota > 8 && nota <= 9){
 		printf("Conceito B:");
 	}
	if (nota >= 10){
 		printf("Conceito A:");
 	}
 	 	
 }



int main(){
	
	int nota = 0;
	printf("\nDigite a nota do aluno:");
	scanf("%d", &nota);
	verificaNota(nota);
	getch();
}
