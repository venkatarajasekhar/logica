#include<stdio.h>
#include<stdlib.h>

   int main(){
        float nota1=0, nota2=0, nota3=0, media=0, soma=0;

       printf("Este programa calcula a nota media dos alunos\n\n");
	   printf("Entre com a primeira nota: ");
	   scanf("%f", &nota1);

	   printf("Entre com a segunda nota: ");
	   scanf("%f", &nota2);

	   printf("Entre com a terceira nota: ");
	   scanf("%f", &nota3);

       soma = nota1+nota2+nota3;

	   media = soma / 3;

       printf("A nota media é %f", media);





   }

