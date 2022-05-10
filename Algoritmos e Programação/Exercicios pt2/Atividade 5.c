#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
float preco, novopreco, desconto;

printf ("Digite o valor do produto:\n");
    scanf ("%f*%c", &preco);


desconto = preco * 10/100;
novopreco = preco - desconto;




printf ("O valor do produto com desconto é : %.1f", novopreco);





}
