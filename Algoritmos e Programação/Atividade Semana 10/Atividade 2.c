#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float idade;

    printf("Quantos anos voce tem?\n");
    scanf("%f*%c", &idade);

    if (idade < 18){
        printf("Voce eh menor de idade");
    }

    else if (idade >= 18 && idade < 100){
        printf("Voce eh maior de idade");
    }

    else if (idade >= 100 && idade < 500){
        printf("Esqueceram de te enterrar");
    }

    else if (idade >= 500){
        printf("Voce eh o Dracula");
    }













}
