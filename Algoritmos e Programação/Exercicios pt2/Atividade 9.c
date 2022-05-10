#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    float basemaior, basemenor, altura, area, total;


    printf ("Digite o valor da base maior:\n");
    scanf ("%f*%c", &basemaior);


    printf ("Digite o valor da base menor:\n");
    scanf ("%f*%c", &basemenor);


    printf ("Digite o valor da altura:\n");
    scanf ("%f*%c", &altura);

    area = (basemaior+basemenor) * altura;
    total = (area/2);

    printf ("O valor da area é : %.1f", total);







}
/*Faça um programa que calcule e mostre a área de um trapézio
Sabe-se que: A = ((base maior + base menor) * altura)/2*/
