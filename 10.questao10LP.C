#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que solicite ao usu�rio dois n�meros e uma opera��o matem�tica (+, -). 
Utilize o switch case para realizar a opera��o desejada e exibir o resultado.
*/

int main()
{
    setlocale(LC_ALL, "");

    int numeroUm;
    int numeroDois;
    int soma;
    int subtracao;
    char operacao;

    printf("Digite a opera��o matem�tica desejada '+' ou '-': ");
    scanf("%c", &operacao);

    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numeroUm);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numeroDois);

       soma = (numeroUm + numeroDois);
       subtracao = (numeroUm - numeroDois);
    
    switch (operacao)
    {
    case '+':
        printf("\nResultado da soma: %d \n", soma);

        break;
    case '-': 
        printf("\nResultado da subtra��o: %d \n", subtracao);

        break;    
    default:
        printf("Oper��o digitada errada.");
        break;
    }

   


    return 0;
}
