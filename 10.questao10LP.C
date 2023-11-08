#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/

int main()
{
    setlocale(LC_ALL, "");

    int numeroUm;
    int numeroDois;
    int soma;
    int subtracao;
    char operacao;

    printf("Digite a operação matemática desejada '+' ou '-': ");
    scanf("%c", &operacao);

    printf("\nDigite o 1º número: ");
    scanf("%d", &numeroUm);

    printf("Digite o 2º número: ");
    scanf("%d", &numeroDois);

       soma = (numeroUm + numeroDois);
       subtracao = (numeroUm - numeroDois);
    
    switch (operacao)
    {
    case '+':
        printf("\nResultado da soma: %d \n", soma);

        break;
    case '-': 
        printf("\nResultado da subtração: %d \n", subtracao);

        break;    
    default:
        printf("Operção digitada errada.");
        break;
    }

   


    return 0;
}
