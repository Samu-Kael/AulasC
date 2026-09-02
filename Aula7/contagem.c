//Contagem Regressiva
#include <stdio.h>

int main(){
    int valor;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    while(valor >= 0){
        printf("%d\n",valor);
        valor = valor - 1;
    }

    return 0;
}
