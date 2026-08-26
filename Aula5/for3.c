#include <stdio.h>

int main(){
    int n, soma = 0;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        soma += i;
    }
    printf("A soma de 1 a n eh igual a: %d\n",soma);
    return 0;
}