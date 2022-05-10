#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float sal, novosal1, aumentocase1, aumentocase2, aumentocase3, aumentocase4, novosal2, novosal3, novosal4;

    printf("Digite o valor do salario:\n");
    scanf("%f*%c",&sal);

    aumentocase1 = (sal * 35/100);
    novosal1 = (aumentocase1 + sal);

    aumentocase2 = (sal * 15/100);
    novosal2 = (sal + aumentocase2);



    if (sal <= 300){
        printf("Seu novo salario e: %.1f" ,novosal1);
    }

    else{
        printf("Seu novo salario e: %.1f", novosal2);
    }













}
