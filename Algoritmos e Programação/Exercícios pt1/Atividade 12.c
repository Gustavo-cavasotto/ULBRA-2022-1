#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

  int numero1, numero2;

  printf("digite um n�mero: ");
  scanf("%d%*c", &numero1);
  printf("digite um n�mero: ");
  scanf("%d%*c", &numero2);

  int resultado = pow(numero1, numero2);
  printf("Os n�mero %d elevado ao n�mero %d � igual a: %d\n", numero1, numero2, resultado);
  return 0;
}
