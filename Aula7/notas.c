//ler notas ate que o usuario digite um valor negativo

#include <stdio.h>

int main(){
    float nota = 0, soma = 0;
    while(nota >= 0){
        printf("Digite o valor da nota: ");
        scanf("%f",&nota);
        soma = soma + nota;
        printf("A soma eh: %f\n",soma);
    }
 return 0;
}
