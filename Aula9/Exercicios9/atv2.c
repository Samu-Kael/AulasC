/*Exercício 2: Calculadora de Imposto de Renda e Alíquota Efetiva Simplificada
--------------------------------------------------------------------------------
Contexto: O cálculo do Imposto de Renda Retido na Fonte (IRRF) utiliza faixas de 
renda e deduções fixas para cada faixa.

Enunciado: Crie um programa que leia o salário bruto mensal de um trabalhador e 
calcule o imposto devido com base nas seguintes regras compostas:
- Até R$ 2.259,20: Isento (0% de imposto)
- De R$ 2.259,21 até R$ 2.826,65: Alíquota de 7.5% (Dedução de R$ 169,44)
- De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (Dedução de R$ 381,44)
- De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22.5% (Dedução de R$ 662,77)
- Acima de R$ 4.664,68: Alíquota de 27.5% (Dedução de R$ 896,00)

Cálculo: O imposto é calculado como: (Salário Bruto * Alíquota) - Dedução.

Saída do Programa:
Exiba o Salário Bruto, o Valor do Imposto a ser pago e a Alíquota Efetiva Real 
(que é a porcentagem real que o imposto representa do salário bruto: 
(Imposto / Salário Bruto) * 100). Formate com duas casas decimais.*/

#include <stdio.h>

int main() {
    float salarioBruto, imposto, aliquotaEfetiva;

    printf("Digite o salario bruto mensal: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto <= 2259.20) {
        imposto = 0;
    } else if (salarioBruto <= 2826.65) {
        imposto = (salarioBruto * 0.075) - 169.44;
    } else if (salarioBruto <= 3751.05) {
        imposto = (salarioBruto * 0.15) - 381.44;
    } else if (salarioBruto <= 4664.68) {
        imposto = (salarioBruto * 0.225) - 662.77;
    } else {
        imposto = (salarioBruto * 0.275) - 896.00;
    }

    aliquotaEfetiva = (imposto / salarioBruto) * 100;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Valor do Imposto a ser pago: R$ %.2f\n", imposto);
    printf("Aliquota Efetiva Real: %.2f%%\n", aliquotaEfetiva);

    return 0;
}