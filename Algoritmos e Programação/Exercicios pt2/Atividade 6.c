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

    printf ("O valor do sal�rio : %.1f", salfinal);









}

/*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final. */
