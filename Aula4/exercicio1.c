#include <stdio.h>

int main(){
    int ladoA;
    int ladoB;
    int ladoC;

    printf("Digite o valor do lado A de um triangulo: ");
    scanf("%d", &ladoA);
    printf("Digite o valor do lado B de um triangulo: ");
    scanf("%d", &ladoB);
    printf("Digite o valor do lado C de um triangulo: ");
    scanf("%d", &ladoC);

    if ((ladoA + ladoB > ladoC) && (ladoB + ladoC > ladoA) && (ladoA + ladoC > ladoB)){
    if ((ladoA == ladoB) && (ladoA== ladoC)){
        printf("Seu triangulo e equilatero \n");
    }
    else if ((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC)){
        printf("Seu triangulo e isosceles \n");
    }
    else{
    printf("Seu triangulo e escaleno \n");
    }
    }
    else{
        printf("Seus lados não formam um triangulo");
     }
     return 0;
    }