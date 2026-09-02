//imprimir tabuada de 1 a 5
#include <stdio.h>

int main(){

    for (int tabuada=1; tabuada <=5; tabuada ++){
    for(int i = 1; i <= 10; i++){
        int mult = tabuada * i;
        printf("%d X %d = %d\n", tabuada, i, mult);
    }
    printf("----------\n");
}
    return 0;
}