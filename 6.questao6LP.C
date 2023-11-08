#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto
(1 - Camiseta, 2 - Calça, 3 - Sapato). Com base na escolha do usuário, exiba a mensagem informando o produto
selecionado e seu preço.*/

int main()
{

    setlocale(LC_ALL, "");

    int produto;

    do
    {

        printf("   Produtos\n");
        printf(" 1 - Camiseta\n");
        printf(" 2 - Calça\n");
        printf(" 3 - Sapato \n\n");
        printf("Digite o número do produto desejado: ");
        scanf("%d", &produto);

        system("cls");

        switch (produto)
        {

        case 1:
            printf("Produto escolhido: Camiseta\n");
            printf("Preço: R$ 30,00\n");

            break;
        case 2:
            printf("Produto escolhido: Calça\n");
            printf("Preço: R$ 50,00\n");

            break;
        case 3:
            printf("Produto escolhido: Sapato\n");
            printf("Preço: R$ 70,00\n");

            break;
        default:
            printf("Opção inválida, tente novamente.\n\n");
        }
    } while (produto < 1 || produto > 3);

    return 0;
}
