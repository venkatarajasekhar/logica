#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int i = 0,soma=0;
    
    
    for(i=5000; i<=9200; i++){
       
      if ((i % 2) != 0){
         printf("%d \n",i);
         soma = soma + i;
      }        
      
     }
    
    printf("SOMA: %d", soma);
    
    getch();
    
    }
