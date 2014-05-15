#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main (){

    int a,b,c,maior,menor;
     printf("Digite o primeiro numero: ");
     scanf("%d", & a);
     printf("Digite o segundo numero: ");
     scanf("%d", & b);
     printf("Digite o terceiro numero: ");
     scanf("%d", & c);
     maior = a;
     menor = a;
     
     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
        
     printf ("\n O maior numero e : %d \ne o menor e: %d", maior, menor);
     getch();
 }
