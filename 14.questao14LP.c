#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*QUEST�O 14:
Implemente um programa que solicite do usu�rio n�meros inteiros e verifique quantos n�meros s�o pares
e quantos s�o �mpares. Al�m disto, deve ser exibido a m�dia aritm�tica de n�meros pares e impares.
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
        printf("Digite o %d� n�mero: ", i + 1);
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
    printf("Quantidade de n�meros pares: %d \n", pares);
    printf("Quantidade de n�meros impares: %d \n\n", impares);
    printf("M�dia de n�meros pares: %.1f \n", mediaPar);
    printf("M�dia de n�meros impares: %.1f \n", mediaImpar);

    return 0;
}
