#include <stdio.h>

int main(){
    int nota, media, media1;

    for(int i=0; i<10; i++){
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%d%*c", &nota);
        media = (nota + media);
        media1 = media/10;
    }

    printf("A média é %d", media1);















}
