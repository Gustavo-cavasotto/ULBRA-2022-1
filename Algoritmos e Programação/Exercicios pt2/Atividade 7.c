#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float peso, novopeso1, engor, emag, novopeso2;

    printf ("Digite o valor do peso:\n");
    scanf ("%f*%c", &peso);

    engor = (peso * 15/100);
    emag = (peso * 20/100);
    novopeso1 = (peso + engor);
    novopeso2 = (peso - emag);


    printf ("O valor do peso engordando : %.1f", novopeso1);
    printf ("O valor do peso emagrecendo : %.1f", novopeso2);









}

/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.*/

