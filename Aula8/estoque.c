/*Desenvolva um programa que exiba um menu repetitivo com as seguintes opções: 1 - Adicionar 
Item, 2 - Remover Item, 3 - Exibir Saldo Atual e 4 - Sair. O programa deve começar com um 
menu de 100 itens. Cada vez que o usuário escolher 1 ou 2, o programa deve pedir a 
quantidade e atualizar o menu. O menu deve continuar aparecendo até que a opção 4 seja 
selecionada*/
#include <stdio.h>

int main(){
    int menu;
    int estoque = 100;
    int add;
    int del;
    while(menu!=4){
        printf("Voce tem um menu de 100 itens. Escolha suas opções: 1 - Adicionar Item, 2 - Remover Item, 3 - Exibir Saldo Atual e 4 - Sair. \n");
        scanf("%d", &menu);
        if(menu==1){
            printf("Digite a quantidade de itens para adicionar: \n");
            scanf("%d", &add);
            estoque = estoque + add;
        }
        else if(menu==2){
            printf("Digite a quantidade de itens para remover: \n");
            scanf("%d", &del);
            estoque = estoque - del;
        }
        else if(menu==3){
            printf("Seu estoque atual e: %d\n", estoque);
    }
        else{
        printf("Saindo do programa\n");
        return 0;}
}
}