#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float sal, novosal, aumento;

    printf("Digite o valor do salario:\n");
    scanf("%f*%c",&sal);

    aumento = (sal * 30/100);
    novosal = (aumento + sal);


   if (sal <= 500){
    printf("Voce ganhou um aumento de 30 por cento, seu novo salario e: %.1f" ,novosal);
   }

   else{
    printf("Voce nao tem direito a aumento");
   }

























}
