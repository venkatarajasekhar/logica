#include<stdio.h>
#include<stdlib.h>

  int main(){

      char nome[] = "";
      int horasTrabalhadas = 0;
      float valorHora = 0;
      int numeroDeFilhos = 0;
      float salario = 0;

      printf("Nome do funcionario:");
      scanf("%s", &nome);

      printf("\nHoras trabalhadas:");
      scanf("%d", &horasTrabalhadas);

      printf("\nValor da hora trabalhada:");
      scanf("%f", &valorHora);

      printf("\nNumero de filhos:");
      scanf("%d", &numeroDeFilhos);

      double percentual = numeroDeFilhos * 0.03;

      salario = horasTrabalhadas * valorHora;

      float valorFinal = salario + (percentual * salario);

      printf("O(a) %s recebe %f reais", nome, valorFinal);


}
