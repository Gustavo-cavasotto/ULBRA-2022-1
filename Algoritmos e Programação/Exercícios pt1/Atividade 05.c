#include <stdio.h>

int main () {

    float sal, persent, novosal, aument;

    printf("Digite o valor do salario:\n");
    scanf ("%f*%c", &sal);

    printf ("Digite a porcentagem de aumento:\n");
    scanf ("%f*%c", &persent);

    aument = (sal*persent/100);

    printf("Você teve um aumento de: %.2f/n", aument);

    novosal= (aument+sal);

    printf("Seu salário total é : %.2f/n :\n", novosal);

















}
