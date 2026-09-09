/* Mostre para o usuário um menu com 3 opções,
Se o usuário escolher a opção 1, imprima na tela "Voce escolheu a menu 1"
Se o usuário escolher a opção 2, imprima na tela "Voce escolheu a menu 2"
Se o usuário escolher a opção 3, imprima na tela "Voce escolheu a menu 3"
Se o usuario escolher outra opção, imprima na tela "menu invalida" e
exibir o menu novamente
*/

#include <stdio.h>
int main() {
    int menu;

    while(menu!=3) {
    printf("Escolha uma Opção de 1 a 3: ");
    scanf("%d", &menu);
    if(menu == 1){
        printf("Opção 1 foi escolhida\n");}
    else if(menu == 2){
        printf("Opção 2 foi escolhida\n");}
    else if (menu == 3) {
        printf("Programa encerrado\n");
        return 0;}
    else{
        printf("opção de escolha invalida escolha outra\n");}
    }}