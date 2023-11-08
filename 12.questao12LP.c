#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*QUEST�O 12:
Desenvolva um programa que solicite ao usu�rio uma quantidade de notas e pe�a para digitar cada nota.
O programa deve calcular e exibir a m�dia das notas digitadas. Utilize o for para repetir o processo de
solicita��o das notas.
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
        printf("Digite a %d� nota: ", i + 1);
        scanf("%f", &nota);

        soma += nota;
    }

    media = (soma / (float)quantidadedeNotas);

    system("cls");

    printf("Quantidade de notas inseridas: %d \n", quantidadedeNotas);
    printf("A m�dia �: %.1f \n", media);
    printf("Soma das notas: %.0f \n", soma);

    return 0;
}
