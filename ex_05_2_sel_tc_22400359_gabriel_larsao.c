/*
5. Elabore o programa que verifica se o valor inteiro fornecido pelo usuário é par ou ímpar.
Analise o problema e verifique quais são os dados que o usuário precisa fornecer.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int num;

    printf("\nDigite um número inteiro para ser verificado: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\nO número digitado é par.");
    } else {
        printf("\nO número digitado é ímpar.");
    }

    return 0;
}