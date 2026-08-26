#include <stdio.h> 

int main(){
    int pa, rz, qtd;
    printf("Digite o primeiro termo da P.A: ");
    scanf("%d", &pa);
    printf("Digite a razao da P.A: ");
    scanf("%d", &rz);
    printf("Digite a quantidade de termos da P.A: ");
    scanf("%d", &qtd);

    for(int i = 1; i <= qtd; i++ ){
        
        printf("A progressao aritimetica eh: %d\n",pa);
        pa = pa + rz;
    }

    return 0;
}