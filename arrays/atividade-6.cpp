#include<stdio.h>
#include<stdlib.h>

int main(){

 int i,numeros[10],somaPares=0,somaImpares=0;

   for(i=0;i<10;i++){
        printf("\nDigite o %dº numero inteiro:", i);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
           somaPares = somaPares + numeros[i];
           printf("Par");
        } else {
           somaImpares = somaImpares + numeros[i];
           printf("Impar");
        }

   }

   printf("\nTotal dos pares: %d", somaPares);
   printf("\nTotal dos impares: %d", somaImpares);


}
