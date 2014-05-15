#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



  float reajuste(float salario){
  	
  	  float reajuste = 0;
  	
     	if(salario >= 1000){
  	     	reajuste = 15;  		
  	      } else {
  	    	reajuste = 20;
       	}
  	      
  	      
  	 float porcentagem = reajuste / 100;      	
     float acrescimo = porcentagem * salario; 
     float novoSalario = acrescimo + salario;
     
     printf("\nrecebe o valor %5.2f um acrescimo de %5.2f no salario", novoSalario, acrescimo);
  	
  	
  }



  int main(){
  	
  	float salario = 0;
  	
  	printf("\nDigite o salario:");
  	scanf("%f",&salario);
  	
  		
  	reajuste(salario);
  	
  	
  	
  }
