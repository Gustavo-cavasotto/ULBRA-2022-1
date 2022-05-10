#include <stdio.h>
#include <math.h>

int main (){
  float ap1, ap2, exame, media;

  printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &ap1);


  printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &ap2);


  printf ("Digite o valor da ap1:\n");
    scanf ("%f*%c", &exame);

    media= (ap1 * 2 + ap2 * 3 + exame * 5)/10;

    if (media>=9 && media <= 10){
        printf("VOCE EH A:\n");
    }'

    if (media>=7.5 && media < 9){
        printf("VOCE EH B:\n");
    }

    if (media>=6 && media < 7.5){
        printf("VOCE EH C:\n");
    }

    if (media>=4 && media < 6){
        printf("VOCE EH D:\n");
        printf("REPROVADO\n");
    }

    if (media < 4){
        printf("VOCE EH E:\n");
        printf("REPROVADO\n");
    }













}
