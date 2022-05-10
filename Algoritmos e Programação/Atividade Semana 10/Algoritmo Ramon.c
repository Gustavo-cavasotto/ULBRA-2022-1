#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float idade, faltam;


    printf("Bem-vindo ao Entrevero do Clube dos Coroas!\n");


    printf("Antes de entrar, preciso saber sua idade\n");
    scanf("%f*%c", &idade);
    faltam = (18 - idade);

    if (idade < 18){
        printf("Voce eh menor de idade, nao pode entrar aqui\n");
        printf("Faltam %.1f anos para voce ser maior de idade\n", faltam);
    }

    else{
        printf("Voce ja pode frequentar o clube dos coroas no entrevero!");
    }












}
