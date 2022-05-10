#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){
    float preco1, preco2, preco3, novopreco1, novopreco2, novopreco3, preco;

    printf("Digite o preco\n");
    scanf("%f*%c", &preco);

    preco1 = (preco * 5/100);
    novopreco1 = (preco + preco1);

     preco2 = (preco * 25/100);
    novopreco2 = (preco + preco2);

     preco3 = (preco * 35/100);
    novopreco3 = (preco + preco3);

    if(preco < 12000){
        printf("O preco total e: %.1f", novopreco1);
    }

    else if (preco <= 25000 && preco > 12000){
        printf("O preco total e: %.1f", novopreco2);
    }

    else if (preco > 25000){
      printf("O preco total e: %.1f", novopreco3);
    }














 }
