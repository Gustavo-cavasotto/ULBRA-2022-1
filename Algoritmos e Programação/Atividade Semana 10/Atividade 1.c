#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){
     float n1,n2,soma1, soma2;

    printf("Digite o valor do n1\n");
    scanf("%f*%c", &n1);

    printf("Digite o valor do n2\n");
    scanf("%f*%c", &n2);

    soma1 = (n1 + 100);
    soma2 = (n2 + 100);


    if (n1 > n2){
        printf("O resultado eh %.1f", soma1);
    }

    else if (n2 > n1){
        printf("O resultado eh %.1f", soma2);
    }

    else if (n2 = n1){
        printf("Os dois numeros sao iguais, o resultado eh %.1f", soma2);
    }






 }
