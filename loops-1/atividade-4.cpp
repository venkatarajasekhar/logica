#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


int main(){
	
	int globo=0,sbt=0,record=0,bandeirantes=0,emissora=0,entrevistados=0;
	
	char terminar;
	
	printf("Preferencia de emissoras:\n");
	
	while(terminar != 'n'){		
		
		printf("Globo: 1  \nSBT: 2  \nRecord: 3 \nBandeirantes: 4 \n  ");
		scanf("%d", &emissora);
		
		switch(emissora){
			case 1:
				globo++;
		     	break;
			case 2:
			    sbt++;
				break;
			case 3:
		    	record++;
				break;
			case 4:
			  	bandeirantes++;
			 	break;  			
		}
		
		entrevistados++;
		
		printf("\n\nDeseja continuar S para sim N para nao:");
	 	scanf("%s", &terminar);	 	
	 	terminar = tolower(terminar);
		
	}	
	
	printf("Numero de entrevistados : %d \n", entrevistados);    	
	printf("Globo: %d  \nSBT: %d  \nRecord: %d \nBandeirantes: %d  ", globo, sbt, record, bandeirantes);	
	
	
}
