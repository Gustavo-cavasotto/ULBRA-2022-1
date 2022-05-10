#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, media;
    printf("Digite o valor da n1\n");
    scanf("%f*%c", &n1);

    printf("Digite o valor da n2\n");
    scanf("%f*%c", &n2);



    media = (n1 + n2)/2;

    if (media >= 7){
        printf("Aprovado");
    }

    else if (media >= 4 && media < 7){
        printf("Ta de exame burro");
    }

    if (media < 4){
        printf("Reprovado se fudeu");
    }
}
