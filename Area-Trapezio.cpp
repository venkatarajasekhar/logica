#include<stdio.h>
#include<stdlib.h>

   int main(){
        float baseMaior=0, baseMenor=0, altura=0, areaTrapezio=0;

       printf("Este programa calcula a area de um trapezio \n\n");
	   printf("Tamanho da base maior: ");
	   scanf("%f", &baseMaior);

	   printf("tamanho da base menor: ");
	   scanf("%f", &baseMenor);

	   printf("Altura: ");
	   scanf("%f", &altura);

       areaTrapezio = (baseMaior + baseMenor) * altura / 2 ;

       printf("A area do trapezio é %f", areaTrapezio);


   }

