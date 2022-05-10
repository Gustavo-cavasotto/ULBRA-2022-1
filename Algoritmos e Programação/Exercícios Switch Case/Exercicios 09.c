#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float sal, novosal1, aumentocase1, aumentocase2, aumentocase3, aumentocase4, novosal2, novosal3, novosal4;

    printf("Digite o valor do salario:\n");
    scanf("%f*%c",&sal);

    aumentocase1 = (sal * 30/100);
    novosal1 = (aumentocase1 + sal);

    aumentocase2 = (sal * 25/100);
    novosal2 = (sal + aumentocase2);

    aumentocase3 = (sal * 20/100);
    novosal3 = (sal + aumentocase3);

    aumentocase4 = (sal * 10/100);
    novosal4 = (sal + aumentocase4);



    if (sal >= 400){
        printf("Seu novo salario e: %.1f" ,novosal1);
    }

    else if (sal <= 400 && sal < 300){
        printf("Seu novo salario e: %.1f" ,novosal2);
    }

   else if (sal <= 300 && sal < 200){
        printf("Seu novo salario e: %.1f" ,novosal3);
    }

    else if (sal <= 200){
        printf("Seu novo salario e: %.1f" ,novosal4);
    }



















}
