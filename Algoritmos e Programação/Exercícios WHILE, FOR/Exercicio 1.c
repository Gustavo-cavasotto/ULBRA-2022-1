#include <stdio.h>

int main(){
    int numero, soma;

    for(int i=0; i<10; i++){
        printf("Digite o numero %d\n", i+1);
        scanf("%d%*c", &numero);
        soma = numero+soma;
    }

    printf("A soma é %d", soma);
















}
