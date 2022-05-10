#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite o valor da n1\n");
    scanf("%f*%c", &n1);

    printf("Digite o valor da n2\n");
    scanf("%f*%c", &n2);

    printf("Digite o valor da n3\n");
    scanf("%f*%c", &n3);

    printf("Digite o valor da n4\n");
    scanf("%f*%c", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media < 6.99)
    {
        printf("Reprovado seu burro!");
    }

    else
    {
        printf("Você foi aprovado");
    }
}
