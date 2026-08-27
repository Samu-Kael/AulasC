/*1. Escreva um programa que leia 3 notas de um aluno e a média das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E
*/
#include <stdio.h>


int main(){
    
    float nota1,nota2,nota3;
    float MA;
    float media;
    
    printf("Digite a sua 1 nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua 2 nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a sua 3 nota: ");
    scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;
        MA = (nota1 + (nota2*2) + (nota3*3) + media) / 7;

        if(MA >= 9){
        printf("Sua media ampla eh de: %.2f. Sua nota e: A",MA);
        }
        
        if((MA < 9) && (MA >= 7.5)){
        printf("Sua media ampla eh de: %.2f. Sua nota e: B", MA);
        }
    
        if((MA < 7.5) && (MA >= 6)){
        printf("Sua media ampla eh de: %.2f. Sua nota e: C",MA);
        }
    
        if((MA < 6) && (MA >= 4)){
        printf("Sua media ampla eh de: %.2f. Sua nota e: D",MA);
        }
    
        if(MA <= 4){
        printf("Sua media ampla eh de: %.2f\n. Sua nota eh: D",MA);
        }
    }
