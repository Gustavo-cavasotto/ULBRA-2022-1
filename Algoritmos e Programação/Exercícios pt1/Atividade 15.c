#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {


  float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
  printf("Digite o pre�o de f�brica do veiculo: $");
  scanf("%f%*c", &precoFabrica);
  printf("Digite o percentual de lucro do distribuidor: ");
  scanf("%f%*c", &perceLucro);
  printf("Digite o percentual de imposto : ");
  scanf("%f%*c", &percImposto);

  lucroDistribuidor = precoFabrica * perceLucro / 100;
  imposto = precoFabrica * percImposto / 100;
  precoFinal = precoFabrica + lucroDistribuidor + imposto;
  printf("O lucro do distribuidor sobre um veiculo no valor de $%.2f ser� de $%.2f \n",precoFabrica, lucroDistribuidor);
  printf("O valor do imposto ser� de $%.2f \n", imposto);
  printf("O pre�o final do veiculo ficar� no valor de $%.2f\n",precoFinal);
  return 0;
}
