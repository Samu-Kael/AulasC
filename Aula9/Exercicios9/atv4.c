/*Exercício 4: Tarifador de Estacionamento Rotativo Inteligente (Uso de Switch-Case)
--------------------------------------------------------------------------------
Contexto: Um estacionamento de shopping possui tarifas que variam de acordo com o 
tipo de veículo e o período do dia (Horário de Pico vs. Horário Normal).

Enunciado: Escreva um programa em C que receba o Tipo de Veículo (um caractere) e 
a Quantidade de Horas que o veículo permaneceu estacionado (int). Em seguida, peça 
para o usuário informar o Período de Entrada usando um menu numérico com switch-case: 
1 - Manhã (06h às 12h), 2 - Tarde (12h às 18h - PICO), 3 - Noite (18h às 00h).

Tipos de Veículo:
- 'M' ou 'm': Motocicleta
- 'C' ou 'c': Carro Passeio
- 'V' ou 'v': Van / Utilitário

Regras de Tarifação Base (por hora):
- Motocicleta: R$ 5,00
- Carro Passeio: R$ 10,00
- Van: R$ 15,00

Modificadores Compostos:
- Se o veículo for Carro ou Van E o período for Tarde (Horário de Pico), acrescente 
  uma taxa fixa extra de R$ 8,00 ao valor total.
- Se o veículo for Motocicleta E o período for Noite, aplique um desconto de 20% 
  no valor total da tarifa.
- Se o tempo de permanência for superior a 5 horas, independentemente do veículo, 
  conceda 10% de desconto sobre o valor bruto das horas antes das taxas.

Saída do Programa:
Exiba o detalhamento do cálculo e o valor total final a ser pago pelo motorista.

*/

#include <stdio.h>

int main() {
    char tipoVeiculo;
    int horas, periodo;
    float tarifaBase = 0, valorTotal = 0;

    printf("Digite o tipo de veiculo (M/m para Motocicleta, C/c para Carro, V/v para Van): ");
    scanf(" %c", &tipoVeiculo);
    
    printf("Digite a quantidade de horas estacionado: ");
    scanf("%d", &horas);
    
    printf("Informe o periodo de entrada (1 - Manha, 2 - Tarde, 3 - Noite): ");
    scanf("%d", &periodo);

    switch(tipoVeiculo) {
        case 'M':
        case 'm':
            tarifaBase = 5.0;
            break;
        case 'C':
        case 'c':
            tarifaBase = 10.0;
            break;
        case 'V':
        case 'v':
            tarifaBase = 15.0;
            break;
        default:
            printf("Tipo de veiculo invalido.\n");
            return 1;
    }

    valorTotal = tarifaBase * horas;

    if ((tipoVeiculo == 'C' || tipoVeiculo == 'c' || tipoVeiculo == 'V' || tipoVeiculo == 'v') && periodo == 2) {
        valorTotal += 8.0; 
    }
    
    if ((tipoVeiculo == 'M' || tipoVeiculo == 'm') && periodo == 3) {
        valorTotal *= 0.8;
    }
    
    if (horas > 5) {
        valorTotal *= 0.9;
    }

    printf("Detalhamento do calculo:\n");
    printf("Tipo de Veiculo: %c\n", tipoVeiculo);
    printf("Horas Estacionadas: %d\n", horas);
    printf("Periodo de Entrada: %d\n", periodo);
    printf("Valor Total a ser Pago: R$ %.2f\n", valorTotal);

    return 0;
}