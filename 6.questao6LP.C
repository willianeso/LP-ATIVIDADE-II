#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Considerando um projeto de e-commerce, implemente um programa que solicite ao usu�rio o c�digo do produto
(1 - Camiseta, 2 - Cal�a, 3 - Sapato). Com base na escolha do usu�rio, exiba a mensagem informando o produto
selecionado e seu pre�o.*/

int main()
{

    setlocale(LC_ALL, "");

    int produto;

    do
    {

        printf("   Produtos\n");
        printf(" 1 - Camiseta\n");
        printf(" 2 - Cal�a\n");
        printf(" 3 - Sapato \n\n");
        printf("Digite o n�mero do produto desejado: ");
        scanf("%d", &produto);

        system("cls");

        switch (produto)
        {

        case 1:
            printf("Produto escolhido: Camiseta\n");
            printf("Pre�o: R$ 30,00\n");

            break;
        case 2:
            printf("Produto escolhido: Cal�a\n");
            printf("Pre�o: R$ 50,00\n");

            break;
        case 3:
            printf("Produto escolhido: Sapato\n");
            printf("Pre�o: R$ 70,00\n");

            break;
        default:
            printf("Op��o inv�lida, tente novamente.\n\n");
        }
    } while (produto < 1 || produto > 3);

    return 0;
}
