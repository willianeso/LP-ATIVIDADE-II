#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*QUESTÃO 14:
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares
e quantos são ímpares. Além disto, deve ser exibido a média aritmética de números pares e impares.
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/

int main()
{
    setlocale(LC_ALL, "");

    int i = 0;
    int numeros;
    int pares = 0;
    int impares = 0;
    float mediaPar;
    float mediaImpar;
    int somaPar = 0;
    int somaImpar = 0;

    do
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros);

        i++;

        if (numeros % 2 == 0)
        {
            pares++;
            somaPar += numeros;
        }
        else
        {

            impares++;
            somaImpar += numeros;
        }

        mediaPar = somaPar / (float)pares;
        mediaImpar = somaImpar / (float)impares;

    } while (numeros >= 0);

    printf("\n\n");
    printf("Quantidade de números pares: %d \n", pares);
    printf("Quantidade de números impares: %d \n\n", impares);
    printf("Média de números pares: %.1f \n", mediaPar);
    printf("Média de números impares: %.1f \n", mediaImpar);

    return 0;
}
