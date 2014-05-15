#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    
    int inicial=0,final=0;
    printf("Digite o numero inicial:");
    scanf("%d", &inicial);
        
    printf("Digite o numero final:");
    scanf("%d", &final);        
    
    int i=0,soma=0,incremento=0;    
    
    for(i=inicial; i<=final; i++){
         if(incremento <= 100){          
          printf("%d \n", i);
          soma=+soma + i;
          }
          
          incremento++;
    }
    
    printf("SOMA: %d", soma);
    
    getch();
    
    
    
    
    }
