/*
4. Construa o programa que calcule o peso ideal de uma pessoa.

Utilize as seguintes fórmulas:
    - Se homem, o peso ideal é calculado assim: (72,7. altura) - 58;
    - Se mulher, o peso ideal é calculado assim: (62,1. altura) - 44,7.

Analise o problema e verifique quais são os dados que o usuário precisa fornecer (digitar).

Teste 1: Entrada: altura = 1.70 e gênero = 1    Saída: peso ideal = 65.59 Kg
Teste 2: Entrada: altura = 1.70 e gênero = 2    Saída: peso ideal = 60.8699999 Kg


ALTERAÇÕES:

a. Mostre o peso com duas casas decimais.

b. Troque a entrada para ‘m’ ou ‘f’.

Teste 3: altura = 1.8 genero = m                Saída: peso ideal = 72.86 Kg

c. Mostre uma mensagem de erro se ele digitar valor de gênero diferente de ‘m’ ou ‘f’.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float altura, peso_ideal;
    char genero;

    printf("\nQual seu gênero? (Feminino - F / Masculino - M) \nResposta: ");
    genero = getchar();

    printf("\nQual a sua altura? (Ex.: 1.70) \nResposta: ");
    scanf("%f", &altura);

    if (genero == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        
        printf("\nSeu peso ideal é: %.2f", peso_ideal);
    } else if (genero == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;

        printf("\nSeu peso ideal é: %.2f", peso_ideal);
    } else {
        printf("\nDigite um caractere válido.");
    }
}