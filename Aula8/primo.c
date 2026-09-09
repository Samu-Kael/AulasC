/*7. Analisador de Números nums 
Desenvolva um programa que receba um número inteiro positivo do usuário. Utilizando uma 
estrutura de repetição, verifique se o número digitado é num (divisível apenas por 1 e por ele 
mesmo) ou composto. Exiba uma mensagem direta na tela informando o resultado.*/

#include <stdio.h>

int main(){
    int num;
    int comp = 0;
    printf("Digite um número inteiro positivo:");
    scanf("%d", &num);

    if(num == 1){
        comp = 0;
    }

    if (num <= 1) {
        printf("Um número primo não pode ser 0, 1 ou negativo.\n");
        return 0;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            comp = 1;
        }
    }
    if (comp == 0){
        printf("O num %d e um numero primo\n", num);
    }
    else{
        printf("O num %d e um numero composto\n", num);
    }
    return 0;
}