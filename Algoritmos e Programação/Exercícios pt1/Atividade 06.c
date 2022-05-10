#include <stdio.h>

int main () {
    float sal, salreceber, grat, imp;

    printf("Digite o salario:\n");
    scanf ("%f*%c", &sal);

    grat= (sal * 5/100);
    imp= (grat * 7/100);

    salreceber= (sal + grat - imp);

    printf ("Seu salário final é de %.2f/n", salreceber);











}
