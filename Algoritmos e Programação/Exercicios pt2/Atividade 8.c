#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    float peso, novopeso1, gramas;

    printf ("Digite o valor do peso:\n");
    scanf ("%f*%c", &peso);

    novopeso1 = peso * 1000;

    printf ("O valor do peso em gramas é : %.1f", novopeso1);

}
