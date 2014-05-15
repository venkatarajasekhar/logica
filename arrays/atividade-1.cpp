#include<stdlib.h>
#include<stdio.h>

int main(){

int i, numeros[10],pares=0,impares=0;

  for(i=0;i<10;i++){
        printf("Digite um numero inteiro : \n");
        scanf("%d", &numeros[i]);
  }

for(i=0;i<10;i++) {

    if(numeros[i] % 2 == 0){
        pares++;
    } else {
       impares++;
    }

}

printf("Totol de numeros pares %d \n", pares);
printf("Total de numeros impares %d \n", impares);


}
