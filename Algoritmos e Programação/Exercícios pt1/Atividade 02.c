#include <stdio.h>

int main () {
    float nota1, nota2, nota3, soma, divi;
    printf ("Digite o valor de nota 1:\n");
    scanf ("%f*%c", &nota1);

    printf ("Digite o valor da nota 2:\n");
    scanf ("%f*%c", &nota2);

    printf ("Digite o valor da nota 3:\n");
    scanf ("%f*%c", &nota3);

    soma=(nota1+nota2+nota3);
    divi=(soma/3);

    printf ("A soma é : %f", divi);

    return 0;


}

