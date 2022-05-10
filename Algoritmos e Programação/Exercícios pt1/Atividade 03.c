#include <stdio.h>

int main () {
    float nota1, nota2, nota3, peso1, peso2, peso3, soma, soma2, divi;
    printf ("Digite o valor de nota1:\n");
    scanf ("%f*%c", &nota1);

    printf ("Digite o valor de nota2:\n");
    scanf ("%f*%c", &nota2);

    printf ("Digite o valor de nota3:\n");
    scanf ("%f*%c", &nota3);

    printf ("Digite o valor de peso1:\n");
    scanf ("%f*%c", &peso1);

    printf ("Digite o valor de peso2:\n");
    scanf ("%f*%c", &peso2);

    printf ("Digite o valor de peso3:\n");
    scanf ("%f*%c", &peso3);

    soma=(nota1*peso1)+(nota2*peso2)+(nota3+peso3);
    soma2=(peso1+peso2+peso3);

    divi=(soma/soma2);
    printf ("A média é : %f", divi);

    return 0;







}
