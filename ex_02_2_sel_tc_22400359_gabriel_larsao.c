/*
2. Faça um programa que leia dois valores quaisquer e mostre o maior deles ou mostre a mensagem “Os valores são iguais.”

TESTE:
Teste 1: Entrada: 5 e 10    Saída: O maior valor é 10
Teste 2: Entrada: 10 e 5    Saída: O maior valor é 10
Teste 3: Entrada: 5 e 5     Saída: Os valores são iguais.

ALTERAÇÕES:
a. Se eles forem diferentes, mostre os valores digitados na ordem decrescente.
b. Se eles forem iguais, mostre a mensagem e o valor digitado.
*/

#include <locale.h>
#include <stdio.h> 

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("\nDigite um número inteiro para ser comparado: ");
    scanf("%d", &a);

    printf("\nDigite outro número inteiro para ser comparado: ");
    scanf("%d", &b);

    if (a > b) {
        printf("\nO valor de A = %d é maior que o valor de B = %d.", a, b);
    } else if (a < b) {
        printf("\nO valor de B = %d é maior que o valor de A = %d.", b, a);
    } else {
        printf("\nO valor escolhido para as duas variáveis foi: %d. Portanto, o valor é igual.", a);
    }

    return 0;
}