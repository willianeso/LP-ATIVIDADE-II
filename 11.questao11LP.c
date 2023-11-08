#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* QUESTÃO 11
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso,
permita ao usuário entrar em um edifício. O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
*/

int main()
{

    setlocale(LC_ALL, "");

    int codigo;
    int codigoCorreto;

    do
    {

        codigoCorreto = 12345;

        printf("Digite o código de acesso para entrar no edifício:");
        scanf("%d", &codigo);

        system("cls");

        if (codigo == codigoCorreto)
        {
            printf("\nTudo certo, pode acessar o edifício!\n");
        }
        else
        {
            printf("Código incorreto. Tente novamente.\n");
        }

    } while (codigo != codigoCorreto);

    return 0;
}