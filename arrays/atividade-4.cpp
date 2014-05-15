#include<stdio.h>
#include<stdlib.h>

int main(){

   int i=0,j,temp;
   int numeros[10] = {9,8,7,6,5,4,3,2,1,0};
   int tamanho = sizeof(numeros)/sizeof(int);


   for (i=0; i<10; i++)
    for(j=i+1; j<10; j++){
       if (numeros[i] > numeros[j]){
          temp=numeros[i];
          numeros[i]=numeros[j];
          numeros[j]=temp;
      }
    }


   for(i=0;i<tamanho;i++){
     printf("%d \n",numeros[i]);

   }

}
