/*Escreva um programa que use uma estrutura de repetição para ler a quantidade de passos dados 
em cada minuto (totalizando 10 entradas). Ao final, o programa deve exibir o total de passos 
acumulados e a média de passos por minuto*/
#include <stdio.h>

int main(){
    int passo;
    int qtd = 10;
    float media;
    
    for(int i = 0; i < qtd; i++){
        printf("Digite a quantidade de passos por minuto: \n");
        scanf("%d", &passo);
        media = media + passo;
    }
    media = media / 10;
    printf("A media de passos por minuto foi de: %f\n", media);
    return 0;
}