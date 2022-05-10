#include <stdio.h>

int main () {
    float salario, aumento, novosal;

    printf ("Digite o valor do salario:\n");
    scanf ("%f*%c", &salario);

    aumento= (salario * 25/100);
    novosal= (salario + aumento);
    printf ("O valor de seu salario é : %f", novosal);

    return 0;




}
