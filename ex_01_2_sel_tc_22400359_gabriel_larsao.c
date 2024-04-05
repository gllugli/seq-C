/*
1. Faça um programa que leia o ano de nascimento de uma pessoa e calcule sua idade. Após
isso verifique se ela já tem idade para votar (16 anos ou mais). mostre a mensagem informando a situação dela:

a) A idade é xx anos e já pode votar.
b) A idade é xx anos e não pode votar.

ALTERAÇÕES:
a. Na tela de saída, mostre também a data de nascimento.
b. Mostre também a idade da pessoa.

*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int ano, idade;

    printf("\nQue ano você nasceu?\n");
    scanf("%d", &ano);

    idade = 2024 - ano;

    if (idade >= 16) {
        printf("\nVocê nasceu no ano de %d. Você tem %d anos, portanto já pode votar.", ano, idade);
    } else {
        printf("\nVocê nasceu no ano de %d. Você tem %d anos, portanto não pode votar.", ano, idade);
    }

    return 0;
}