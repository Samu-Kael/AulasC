/*escreva um programa que:
leia inteiros até que o o usuário digite 0.
Conte e imprima quantos números pares e ímpares foram informados(desconsiderando o 0)*/

#include <stdio.h>

int main(){
    int num, par = 0, impar = 0;

    printf("Digite nums inteiros (digite 0 para sair):\n");

    do {
        scanf("%d", &num);

        if(num != 0){
            if(num % 2 == 0){
                par++;
            } else {
                impar++;
            }
        }
    } while(num != 0);

    printf("Quantidade de nums par: %d\n", par);
    printf("Quantidade de nums impar: %d\n", impar);

    return 0;
}