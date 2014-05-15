#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

 int main(){
 	
 	float nota1=0,nota2=0,nota3=0,media=0,frequencia=0;
 	int quantidadeAlunos=0,quantidadeReprovado=0,quantidadeAprovado=0;
 	char terminar;
 	
 	while(terminar != 'n'){
 		
 		printf("Digite a primeira nota:");
 		scanf("%f",&nota1);
 		
 		printf("Digite a segunda nota:");
 		scanf("%f",&nota2);
 		
 		printf("Digite a terceira nota:");
 		scanf("%f",&nota3);
 		
 		printf("Frequencia:");
 		scanf("%f", &frequencia);
 		
 		media = (nota1 + nota2 + nota3) / 3;
 		
 		if(media >= 7 && frequencia >= 75){
 			printf("Aprovado! media: %5.2f", media);
			quantidadeAprovado++; 			
 		} else {
 			printf("Reprovado! media: %5.2f", media);
 			quantidadeReprovado++;
 		}
 		
 		quantidadeAlunos++;
 		
 		printf("\n\nDeseja continuar S para sim N para nao:");
	 	scanf("%s", &terminar);	 	
	 	terminar = tolower(terminar);
 	}
 	
 	printf("%d alunos, %d aprovados e %d reprovados", quantidadeAlunos, quantidadeAprovado, quantidadeReprovado);
 	
 }
