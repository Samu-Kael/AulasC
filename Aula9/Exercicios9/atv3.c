/*Exercício 3: Sistema de Triagem Hospitalar Avançado (Protocolo de Manchester)
--------------------------------------------------------------------------------
Contexto: Prontos-socorros utilizam sistemas de triagem para definir a urgência do 
atendimento com base em sintomas combinados.

Enunciado: Desenvolva um programa que auxilie na triagem médica. O programa deve 
solicitar ao usuário que informe a gravidade de 3 sintomas clássicos usando uma 
escala de 0 (Ausente) a 3 (Grave):
- Dor Torácica (int)
- Dificuldade Respiratória (int)
- Febre/Temperatura (int)

Regras de Classificacao:
- Se a Dor Torácica FOR igual a 3 OU a Dificuldade Respiratória FOR igual a 3: 
  Classificacao "VERMELHA" (Emergência - Atendimento Imediato).
- Se a Dor Torácica for 2 OU a Dificuldade Respiratória for 2, E a Febre for maior 
  ou igual a 2: Classificacao "LARANJA" (Muito Urgente - Até 10 minutos).
- Se pelo menos um dos três sintomas for igual a 2 ou 3 (e não se enquadrar nas 
  regras anteriores): Classificacao "AMARELA" (Urgente - Até 60 minutos).
- Se todos os sintomas forem menores ou iguais a 1, mas pelo menos um for igual a 1: 
  Classificacao "VERDE" (Pouco Urgente).
- Se todos os sintomas forem 0: Classificacao "AZUL" (Não Urgente).

Saída do Programa:
Exiba a cor da classificacao do paciente e o tempo máximo de espera recomendado.*/

#include <stdio.h>

int main() {
    int dorToracica, dificuldadeRespiratoria, febre;

    printf("Informe a gravidade da Dor Toracica (0-3): ");
    scanf("%d", &dorToracica);
    
    printf("Informe a gravidade da Dificuldade Respiratoria (0-3): ");
    scanf("%d", &dificuldadeRespiratoria);
    
    printf("Informe a gravidade da Febre/Temperatura (0-3): ");
    scanf("%d", &febre);

    if (dorToracica == 3 || dificuldadeRespiratoria == 3) {
        printf("Classificacao: VERMELHA - Emergencia (Atendimento Imediato)\n");
    } else if ((dorToracica == 2 || dificuldadeRespiratoria == 2) && febre >= 2) {
        printf("Classificacao: LARANJA - Muito Urgente (Até 10 minutos)\n");
    } else if (dorToracica >= 2 || dificuldadeRespiratoria >= 2 || febre >= 2) {
        printf("Classificacao: AMARELA - Urgente (Até 60 minutos)\n");
    } else if (dorToracica == 1 || dificuldadeRespiratoria == 1 || febre == 1) {
        printf("Classificacao: VERDE - Pouco Urgente\n");
    } else {
        printf("Classificacao: AZUL - Nao Urgente\n");
    }

    return 0;
}