#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  float alturaDegrau, alturaObjetivo, quantidadeDegraus;
  printf("Digite a altura em metros do degrau da escada: ");
  scanf("%f%*c", &alturaDegrau);
  printf("Digite a altura que voc� deseja alcan�ar: ");
  scanf("%f%*c", &alturaObjetivo);

  quantidadeDegraus = alturaObjetivo / alturaDegrau;
  printf("Voc� precisa-r� subir %.0f degraus para alcan�ar %.0f metros de altura\n", quantidadeDegraus, alturaObjetivo);
  return 0;

}
