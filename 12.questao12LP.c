#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*QUESTÃO 12:
Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota.
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de
solicitação das notas.
*/

int main()
{
    setlocale(LC_ALL, "");

    int quantidadedeNotas = 0;
    float nota = 0;
    float media = 0;
    float soma = 0;
    int i;

    printf("Digite quantas notas deseja inserir: ");
    scanf("%d", &quantidadedeNotas);

    printf("\n");

    for (i = 0; i < quantidadedeNotas; i++)
    {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &nota);

        soma += nota;
    }

    media = (soma / (float)quantidadedeNotas);

    system("cls");

    printf("Quantidade de notas inseridas: %d \n", quantidadedeNotas);
    printf("A média é: %.1f \n", media);
    printf("Soma das notas: %.0f \n", soma);

    return 0;
}
