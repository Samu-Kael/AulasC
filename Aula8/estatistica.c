/*3. Estatísticas de uma População 
Crie um algoritmo que leia a idade e o salário de 15 pessoas. Usando loops, calcule e exiba:
A média de salário do grupo.
A maior e a menor idade do grupo.
A quantidade de pessoas com salário menor que R$ 2.000,00.*/

#include <stdio.h>

int main(){
    int idade, i, maior = 0, menor = 150;
    float salario, media = 0, salarioMenor = 0;

    for(i = 1; i <= 15; i ++){
        printf("Digite a sua idade: %d\n", i);
        scanf("%d",&idade);
        printf("Digite o seu salario: %d\n", i);
        scanf("%f",&salario);

        while(idade < 0 || idade > 150){
            printf("Deixa de mentir man kkkkk. Digite novamente ai a idade e salario %d: ", i);
            scanf("%d", &idade, "|%f", &salario);
        }

        media += salario;

        if( salario < 2000){
            salarioMenor += 1;
        }
        if(idade > maior){
            maior = idade;
        }
        if(idade < menor){
            menor = idade;
        }
    }
    media = media / 15;

    printf("A Media do salario do grupo e de: %f \n", media);
    printf("O maior e menor idade do grupo sao: %d %d \n", maior, menor);
    printf("A quantidade de pessoas com o salario menor de 2 mil sao de: %d \n", salarioMenor);
}