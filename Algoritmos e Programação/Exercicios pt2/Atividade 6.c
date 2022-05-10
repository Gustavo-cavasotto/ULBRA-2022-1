#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float sal, comi, vendas, salfinal;

    printf ("Digite o valor do sal:\n");
    scanf ("%f*%c", &sal);

    printf ("Digite o valor das vendas:\n");
    scanf ("%f*%c", &vendas);

    comi = vendas * 4/100;

    salfinal = sal + comi;

    printf ("O valor do salário : %.1f", salfinal);









}

/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */
