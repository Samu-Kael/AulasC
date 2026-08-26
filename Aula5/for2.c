#include <stdio.h>

int main() {
    for(int i=2; i <= 20; i++){
        if (i % 2 == 0){
            printf("O numero e: %d\n", i);
        }
    }

    return 0;
}