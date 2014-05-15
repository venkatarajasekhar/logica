#include<stdio.h>
#include<stdlib.h>

int main(){


int i,numeros1[5],numeros2[5],todoNumeros[10];

   for(i=0;i<5;i++){
        printf("\nDigite o %dº numero inteiro para o primeiro array:", i);
        scanf("%d", &numeros1[i]);

        printf("\nDigite o %dº numero inteiro para o segundo array:", i);
        scanf("%d", &numeros2[i]);
   }

   int i2;
   for(i=0; i<10;i++){

      if(i <= 5){
           todoNumeros[i] = numeros1[i];
      } else {
          i2++;
      }

      if(i >= 5){
         todoNumeros[i] = numeros2[i2];
      }

   }


   for(i=0;i<10;i++){
       printf("o numero da posicao %d e %d\n",i, todoNumeros[i]);
   }












}
