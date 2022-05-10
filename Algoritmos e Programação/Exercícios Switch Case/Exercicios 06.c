#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int n1,n2,opcao, pot, raiz2, raiz3, raiz22, raiz33;

    printf ("Digite o valor do n1:\n");
    scanf ("%d%*c", &n1);


    printf ("Digite o valor do n2:\n");
    scanf ("%d%*c", &n2);

    pot = (pow(n1,n2));
    raiz2 = (sqrt(n1));
    raiz22 = (sqrt(n2));


    printf("Digite sua opcao:\n");
    printf("Escolha 1 - Potencia\n");
     printf("Escolha 2 - Raiz quadrada\n");

     scanf("%d%*c", &opcao);

     switch (opcao){
        case 1:{
            printf("O valor da potencia é: %.1d", pot);
            break;
        }

        case 2:{
            printf("O valor da raiz do n1 e: %.1d\n",raiz2);
            printf("O valor da raiz do n2 e: %.1d\n",raiz22);
            break;
        }

        default:{
             printf("Numero invalido, encerrando calculadora\n");
        }











     }






}
