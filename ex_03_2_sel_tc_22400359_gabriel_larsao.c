/*
3. Elabore o programa que leia um número qualquer e verifique se ele é positivo, nulo ou negativo.

Teste 1: número = 4     Saída: Número Positivo
Teste 2: número = 0     Saída: Número Nulo
Teste 3: número = -4    Saída: Número Negativo

ALTERAÇÕES:
a. Além da mensagem, mostre também o número digitado pelo usuário.


b. 

Se o número for positivo, mostre a mensagem, o valor da variável e o dobro de seu valor;
 
Se negativo, mostre a mensagem, o valor da variável e o seu triplo de seu valor;

Se nulo, mostre a mensagem, o valor da variável número.

*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num, dobro, triplo;

    printf("\nDigite o valor inteiro que desejas verificar: ");
    scanf("%d", &num);

    dobro = num * 2;
    triplo = num * 3;

    if (num > 0 ) {
        printf("\nO valor digitado foi: %d. Ele é positivo e seu dobro é: %d.", num, dobro);
    } else if (num < 0) {
        printf("\nO valor digitado foi: %d. Ele é negativo e seu triplo é: %d.", num, triplo);
    } else {
        printf("\nO valor digitado foi: %d. Ele é nulo.", num);
    }
}