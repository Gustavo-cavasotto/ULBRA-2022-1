#include <stdio.h>

int main(){
    int nInicial, nFinal;

    printf("Digite o numero incial\n");
    scanf("%d%*c", &nInicial);
    printf("Digite o numero final\n");
    scanf("%d%*c", &nFinal);

    for (int i=nInicial; i<=nFinal; i++){
        if (i%2!=0){
            printf("Numero impar: %d\n", i);
        }
    }

}
