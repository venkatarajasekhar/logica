#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    
    int i,idade=0,soma=0,resultado=0,qtdPessoas=0;
       
    printf("Digite a quantidade de pessoas:");  
    scanf("%d", &qtdPessoas);       
       
    for(i=1; i<=qtdPessoas; i++){
          
          printf("Digite a idade");
          scanf("%d",&idade);
                   
          idade= idade + idade;                   
 
    }   
    
    resultado = idade / qtdPessoas;    
    
    printf("Media de idade: %d %d", resultado, qtdPessoas);
    
    getch();    
    
    
    }
