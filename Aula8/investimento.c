#include <stdio.h>

int main(){
    float inves;
    float juros;
    int anos;

    printf("digite o valor inicial investido: ");
    scanf("%f", &inves);
    printf("digite a taxa de juros anual (em %%): ");
    scanf("%f", &juros);
    printf("digite a quantidade de anos: ");
    scanf("%d", &anos);

    for(int i = 1; i <= anos; i++){
        inves = inves + (inves * (juros / 100));
        printf("no ano %d, o seu investimento esta em %2.f\n", i, inves);
    }
}