#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float ap1, ap2, ap3, media, exame;

    printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &ap1);


  printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &ap2);


  printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &ap3);

    media = (ap1 + ap2 + ap3)/3;

    printf("Sua media e de : %.1f:\n", media);

    if (media >= 7){
        printf("Voce esta aprovado!\n");
    }

    if (media >= 3 && media < 7){
        printf("Voce esta de exame, burro!\n");
        exame = (12 - media);
        printf("Voce precisa tirar : %.2f", exame);
    }

    else{
    printf("Voce esta reprovado\n");
    }












}
