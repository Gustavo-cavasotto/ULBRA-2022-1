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

    if (media>=8 && media <= 10){
        printf("VOCE E A:\n");
    }

    if (media>=7 && media < 8){
        printf("VOCE E B:\n");
    }

    if (media>=6 && media < 7){
        printf("VOCE E C:\n");
    }

    if (media>=5 && media < 6){
        printf("VOCE E D:\n");
    }

    if (media>=0 && media < 5){
        printf("VOCE E E:\n");
    }












}
