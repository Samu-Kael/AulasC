#include <stdio.h>

int main(){
    int i;
    float nota, soma = 0, media, maior = 0, menor = 10;

    for(i = 1; i <= 10; i++){
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        while(nota < 0 || nota > 10){
            printf("Nota invalida! Digite novamente a nota %d: ", i);
            scanf("%f", &nota);
        }

        soma += nota;

        if(nota > maior){
            maior = nota;
        }
        if(nota < menor){
            menor = nota;
        }
    }

    media = soma / 10;

    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}