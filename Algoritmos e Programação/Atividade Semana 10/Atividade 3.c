#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main (){
    float n1, n2, sub1, sub2;

    printf("Digite o valor do n1\n");
    scanf("%f*%c", &n1);

    printf("Digite o valor do n2\n");
    scanf("%f*%c", &n2);

    sub1 = (n1 - n2);
    sub2 = (n2 - n1);



    if (n1 > n2){
        printf("O resultado eh %.1f", sub1);
    }

    else if (n2 > n1){
        printf("O resultado eh %.1f", sub2);
    }

     else if (n2 == n1){
        printf("O resultado eh 0");
    }













 }
