/*2. Validação de Acesso 
Crie um programa que defina uma senha numérica interna (ex: 2026). O programa deve pedir 
para o usuário digitar a senha. Se ele errar, exiba "Senha Inválida! Tente novamente" e peça o 
dado de novo. O programa só deve parar quando a senha correta for digitada ou quando o 
usuário atingir o limite de 3 tentativas erradas, exibindo a mensagem correspondente ("Acesso 
Permitido" ou "Conta Bloqueada").*/
#include <stdio.h>

int main(){
    int senha = 95;

    for(int i = 1; i <= 3; i++){
    printf("Digite a sua senha de usuário: \n");
    scanf("%d", &senha);
    if (senha != 95){
    printf("Senha Inválida! Tente novamente. \n");
    }
    else if(senha == 95){
        printf("Acesso Permitido.");
        return 0;
    }
    if(i == 3){
        printf("Limite de tentativas atingido.");
        return 0;
        }
    }
}