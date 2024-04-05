/*
7. Elabore o programa que verifica se o usuário digitou a senha correta. 

Mostre a mensagem “Senha incorreta.” ou “Acesso liberado.”. Supondo que a senha correta seja 123.


Teste 1: senha = 123 Resposta: Acesso liberado.
Teste 2: senha = 111 Resposta: Senha incorreta.

*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int senha;

    printf("\nDigite a senha: ");
    scanf("%d", &senha);

    if (senha == 123) {
        printf("\nAcesso Liberado.");
    } else {
        printf("\nSenha Incorreta.");
    }

    return 0;
}