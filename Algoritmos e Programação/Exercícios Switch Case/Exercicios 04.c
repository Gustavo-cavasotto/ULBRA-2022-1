#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    float n1, n2, n3;

    printf ("Digite o valor do n1:\n");
    scanf ("%f*%c", &n1);


  printf ("Digite o valor do n2:\n");
    scanf ("%f*%c", &n2);

    printf ("Digite o valor do n3:\n");
    scanf ("%f*%c", &n3);

    if ((n1 > n2)&& (n1>n3)){
        printf("O maior número é: %.1f", n1);
    }

    else if ((n2 > n3)&& (n2>n1)){
        printf("O maior número é: %.1f", n2);
    }


    else
        {printf("O maior número é: %.1f", n3);
    }















}


