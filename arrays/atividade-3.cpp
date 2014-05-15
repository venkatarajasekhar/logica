#include<stdio.h>
#include<stdlib.h>

int main(){

   int i,numeros[10];

   for(i=0;i<10;i++){
        printf("Digite %dº numero inteiro :", i);
        scanf("%d", &numeros[i]);
   }

   int maior = numeros[0];
   for(i=0;i<10;i++){

     if(numeros[i] > maior){
         maior = numeros[i];
     }

   }

   printf("\n\nO maior numero e: %d", maior);



}
