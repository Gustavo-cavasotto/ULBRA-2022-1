#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main (){
    float n1, n2, sub1, sub2;

    printf("Digite o valor do n1\n");
    scanf("%f*%c", &n1);

    printf("Digite o valor do n2\n");
    scanf("%f*%c", &n2);

    if (n1>n2){
        printf("O maior é %.1f", n1);
    }

    else if (n2>n1){
        printf("O maior é %.1f", n2);
    }

     else if (n2 == n1){
        printf("Os numeros sao iguais ");
        return 0;

    }



 }


