#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n1,n2, mult, menos, produto, divisao, media, opcao;

    printf ("Digite o valor do n1:\n");
    scanf ("%d%*c", &n1);


    printf ("Digite o valor do n2:\n");
    scanf ("%d%*c", &n2);

    media = (n1 + n2)/2;
    menos = (n1 - n2);
    divisao = (n1 / n2);
    produto = (n1 * n2);

    printf("Digite sua opcao:\n");
    printf("Escolha 1 - Media\n");
     printf("Escolha 2 - Subtracao\n");
      printf("Escolha 3 - Produto\n");
       printf("Escolha 4 - Divisao\n");

    scanf("%d%*c",&opcao);

    switch (opcao){
        case 1:{
        printf("A media entre os dois numeros e: %.1d", media);
        break;
        }

        case 2:{
        printf("A diferenca entre os numeros e: %.1d", menos);
        break;
        }

        case 3:{
        printf("O produto entre os numeros e: %.1d", produto);
        break;

        }

        case 4:{
        printf("A divisao entre os numeros e: %.1d", divisao);
        break;
        }

        default:{
        printf("Numero invalido, encerrando calculadora\n");
        }

    }

















}
