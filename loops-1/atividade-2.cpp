#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main(){

      int pessoas=0,mulheres=0,homens=0;
     char terminar,sexo;

     while(terminar != 'n'){
     	
     	printf("Digite M para mulher e H para homem:");
     	scanf("%s", &sexo);
     	sexo = tolower(sexo);
     	if(sexo == 'm'){
     		mulheres++;
          } else {
         	homens++;
     	}     	
     	
     	printf("\n\nDeseja continuar S para sim N para nao:");
	 	scanf("%s", &terminar);	 	
	 	terminar = tolower(terminar);
     }
   
    printf("Homens %d, Mulheres %d ", homens, mulheres);


}
