#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    /*QUEST�O 8: 
    Desenvolva um programa que solicite ao usu�rio um n�mero inteiro positivo e fa�a uma contagem regressiva a partir 
    desse n�mero at� zero. Utilize o switch case para exibir mensagens personalizadas para cada n�mero da 
    contagem regressiva.*/

int main()
{

    setlocale(LC_ALL, "");
    int numero;

    printf("Digite um n�mero: \n");
    scanf("%d", &numero);

    if (numero < 0){
        printf("\nDigite o n�mero positivo: ");

    } else {
        

        while (numero >= 0) {

            switch (numero) {
            case 0:
                printf("0 � par \n");

                break;
            case 1:
                printf("1 � �mpar \n");

                break;
            default:
                if (numero % 2 == 0) {
                    printf("%d � par\n", numero);

                } else {
                    printf("%d � �mpar \n", numero);

                }

                break;
            }
            numero--;

        }
    }

    return 0;
}