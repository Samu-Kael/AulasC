/*Crie um programa que peça ao usuário um número inteiro N. O programa deve gerar e imprimir
os N primeiros termos da Sequência de Fibonacci (onde os dois primeiros termos são 0 e 1, e os
próximos são sempre a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13...).*/

#include <stdio.h>
    
int main(){
    int num, i, a = 0, b = 1, c;

    printf("Digite a quantidade para a sequencia de fibonacci: \n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(i == 1){
            printf("%d\n", a);
        }
        else if(i == 2){
            printf("%d\n", b);
        }
        else{
            c = a + b;
            printf("%d\n", c);
            a = b; 
            b = c;
        }
    }
    return 0;
}