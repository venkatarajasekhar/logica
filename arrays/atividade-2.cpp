#include<stdlib.h>
#include<stdio.h>

int main(){

  int i,numeros[10],primerosNumeros[5],ultimosNumeros[5];

  for(i=0;i<10;i++){
        printf("Digite %dº numero inteiro :", i);
        scanf("%d", &numeros[i]);
  }
  //primeiros 5 numeros
  for(i=0;i<=5;i++){
      if(i <= 5){
         primerosNumeros[i] = numeros[i];
      }

  }
  //5 ulitmos numeros
  int cincoUltimos=0;
  for(i=0;i<10;i++){
      if(i >= 5){
         ultimosNumeros[cincoUltimos++] = numeros[i];
      }

  }

  printf("\n\n");

  //exibi os numeros
  printf("\nPrimeiros numeros no array: \n");
  for(i=0;i<5;i++){
      printf("%d \n", primerosNumeros[i]);
  }

  printf("\nUltimos numeros no array: \n");
  for(i=0;i<5;i++){
      printf("%d \n", ultimosNumeros[i]);
  }




}
