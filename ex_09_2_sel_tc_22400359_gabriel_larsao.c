/*
9. Projete o programa que leia um valor numérico e verifique se ele é maior ou igual a cem.

Mostre uma das mensagens: “Valor maior ou igual a cem.” Ou “Valor menor que cem.”

Teste 1: valor = 200 Saída: Valor maior ou igual a cem.

Teste 2: valor = 20 Saída: Valor menor que cem.

Teste 3: valor = 100 Saída: Valor maior ou igual a cem.

ALTERAÇÕES:
a. Mostrar também o valor numérico lido, na tela de saída.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float num;

    printf("\nDigite um número real para ser identificado: ");
    scanf("%f", &num);

    if (num >= 100) {
        printf("\nO número digitado foi: %.1f. Ele é maior ou igual a 100.", num);
    } else {
        printf("\nO número digitado foi: %.1f. Ele á menor que 100.", num);
    }

    return 0;
}