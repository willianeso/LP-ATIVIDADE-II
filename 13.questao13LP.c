#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*QUEST�O 13:
Crie um programa que solicite do usu�rio dois n�meros inteiros e informe qual destes n�meros
� o maior e qual � o menor.
*/

int main()
{
    setlocale(LC_ALL, "");

    int numero;
    int maiorNumero = 0;
    int menorNumero = 999;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numero);

        maiorNumero = numero > maiorNumero ? numero : maiorNumero;
        menorNumero = numero < menorNumero ? numero : menorNumero;
    }
    system("cls");

    printf("O maior n�mero digitado: %d \n", maiorNumero);
    printf("O menor n�mero digitado: %d \n", menorNumero);

    return 0;
}
