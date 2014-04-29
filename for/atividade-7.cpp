#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int i,numero=0,in=0;
	
	for(i=1;i<=10;i++){
	
		if(i==4 || i==5 || i==6 || i==9){
			printf("Tabuada do %d \n",i);
			
			for(in=1;in<=10;in++){
				printf("%d x %d = %d \n", in, i, (i * in));
			}
			
			
		}		
			
    }
}
	
	

