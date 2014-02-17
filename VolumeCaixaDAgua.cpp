#include<stdio.h>
#include <math.h>

int main(){

    float raio=0,altura=0,volume=0;

    printf("Calcular volume da caixa d agua\n\n");
    printf("Digite o raio:");
    scanf("%f", &raio);

    printf("Digite a altura:");
    scanf("%f", &altura);

     volume = 3.14 * pow(raio, 2) * altura;

    printf("O volume da caixa d agua e %f", volume);


}
