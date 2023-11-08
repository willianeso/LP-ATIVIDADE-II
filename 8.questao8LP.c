#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    /*QUESTÃO 8: 
    Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir 
    desse número até zero. Utilize o switch case para exibir mensagens personalizadas para cada número da 
    contagem regressiva.*/

int main()
{

    setlocale(LC_ALL, "");
    int numero;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero < 0){
        printf("\nDigite o número positivo: ");

    } else {
        

        while (numero >= 0) {

            switch (numero) {
            case 0:
                printf("0 é par \n");

                break;
            case 1:
                printf("1 é ímpar \n");

                break;
            default:
                if (numero % 2 == 0) {
                    printf("%d é par\n", numero);

                } else {
                    printf("%d é ímpar \n", numero);

                }

                break;
            }
            numero--;

        }
    }

    return 0;
}