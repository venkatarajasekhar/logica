#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,acertos=0,erros=0;
    int gabarito[10] = {1,4,3,1,5,4,2,4,1,3};
    int resposta[10] = {1,4,2,1,5,3,1,3,2,1};


    for(i=0;i<10;i++){

         if(gabarito[i] == resposta[i]){
            acertos++;
         } else {
            erros++;
         }

    }

    printf("\n%d acertos, %d erros!\n",acertos,erros);



}
