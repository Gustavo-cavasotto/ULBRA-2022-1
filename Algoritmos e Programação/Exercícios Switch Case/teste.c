#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float pesoRacao, racaoDiaria, gastoRacao, quantidadeRestante;
  printf("Digite o peso do saco de ra��o: Kg");
  scanf("%f%*c", &pesoRacao);
  printf("Digite a quantidade de ra��o diaria em gramas: ");
  scanf("%f%*c", &racaoDiaria);

  pesoRacao *= 1000;
  gastoRacao = racaoDiaria * 5;
  quantidadeRestante = (pesoRacao - gastoRacao) / 1000;
  printf("A quantidade de ra��o restante ap�s 5 dias � de: %.1fKg\n", pesoRacao);
  return 0;
}
