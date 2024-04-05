/*
10. Projete o programa que calcule as raízes de uma equação do 2° grau, levando em consideração a análise da existência de raízes reais. Se o valor de delta for menor que zero, não existem raízes nos reais; se delta for igual a zero, existem duas raízes iguais; se delta for maior que zero, existem duas raízes diferentes. 

Expressão: 

ax^2 + bx + c = 0 

x = (- b +-  raiz_quadrada ( delta ))/2a 

delta = (b^2 - 4 a c) 

Observação: inclua a biblioteca math.h nas declarações de pré-processamento e utilize a função sqrt, por exemplo: 

float x=4, raizq; 
raizq = sqrt(x); 

A função pow recebe a base e o expoente e retorna o resultado, veja o exemplo: 

int x=2, y=2, pot; pot = pow(x,y); 
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int a, b, c, delta, x1, x2, expressao;

    printf("\nDigite o valor de A: ");
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    scanf("%d", &b);

    printf("\nDigite o valor de C: ");
    scanf("%d", &c);

    delta = (pow(b, 2) - (4 * a * c));

    x1 = ((-b + sqrt(delta)) / (2 * a));
    x2 = ((-b - sqrt(delta)) / (2 * a));

    if (delta < 0) {
        printf("\nDelta menor que zero. Não existe raíz nos reais.");
    } else if (delta = 0) {
        printf("\nDelta igual a zero. As raízes são iguais. \n\nO valor das raízes é: %d", a);
    } else {
        printf("\nDelta maior que zero. As raízes são diferentes. \n\nA 1ª raíz é igual a: %d. \nA segunda raíz é igual a: %d.", x1, x2);
    }

    return 0;
}
