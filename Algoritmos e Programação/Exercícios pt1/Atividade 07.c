#include <stdio.h>

int main () {
    float sal, salreceber, imp;

    printf ("Digite o valor do salário:\n");


    scanf ("%f*%c", &sal);

    imp= (sal * 10/100);
    salreceber = (sal + 50 - imp);

    printf ("O salário final é de %.2f/n", salreceber);
















}
