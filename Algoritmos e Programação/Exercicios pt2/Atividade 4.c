#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    float nota1, nota2, p1, p2, media, mediafinal;

    printf ("Digite o valor de nota1:\n");
    scanf ("%f*%c", &nota1);

    printf ("Digite o valor de nota2:\n");
    scanf ("%f*%c", &nota2);

    p1 = 2;
    p2= 3;

    media = (nota1 * p1 + nota2 * p2);

    mediafinal = (media / 5);

    printf ("A média final é : %.1f", mediafinal);














}
