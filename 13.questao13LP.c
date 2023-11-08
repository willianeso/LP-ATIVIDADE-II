#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*QUESTÃO 13:
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números
é o maior e qual é o menor.
*/

int main()
{
    setlocale(LC_ALL, "");

    int numero;
    int maiorNumero = 0;
    int menorNumero = 999;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numero);

        maiorNumero = numero > maiorNumero ? numero : maiorNumero;
        menorNumero = numero < menorNumero ? numero : menorNumero;
    }
    system("cls");

    printf("O maior número digitado: %d \n", maiorNumero);
    printf("O menor número digitado: %d \n", menorNumero);

    return 0;
}
