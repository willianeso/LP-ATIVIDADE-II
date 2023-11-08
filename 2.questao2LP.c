#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/* QUEST�O 2:
Voc� � um desenvolvedor de e-commerce e est� trabalhando em um novo sistema de descontos.
O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana.
Se a compra for feita em um fim de semana, o desconto ser� de 15% sobre o valor da compra acima de R$ 100,00.*/

int main()
{

    int opcao;

    float desconto = 0;
    float valordaCompra = 0;
    float valorComDesconto;

    setlocale(LC_ALL, "");

    do
    {

        printf("\n Compras acima de R$ 100,00 em dia de semana, voc�ganha 10%% de desconto \n");
        printf(" Compras acima de R$ 100,00 em fim de semana, voc� ganha 15%% de desconto \n\n");
        printf(" Digite 1 para dia de semana e 2 para fim de semana: ");
        scanf("%d", &opcao);

        fflush(stdin);
        system("cls");

        switch (opcao)
        {
        case 1:

            printf(" Digite o valor da compra: R$ ");
            scanf("%f", &valordaCompra);

            if (valordaCompra > 100) {
                desconto = 0.10;
            }

            valorComDesconto = valordaCompra - (valordaCompra * desconto);

            break;
        case 2:
            printf(" Digite o valor da compra: R$ ");
            scanf("%f", &valordaCompra);

            if (valordaCompra > 100)
            {
                desconto = 0.15;
            }

            valorComDesconto = valordaCompra - (valordaCompra * desconto);

            break;
        default:
            printf(" \nOp��o inv�lida!\n\n");
            fflush(stdin);

            
            system("pause");
            system("cls");

            break;
        }

    } while (opcao < 1 || opcao > 2);

    system("cls");

    printf("\n Valor da compra sem desconto: R$ %.2f \n", valordaCompra);
    printf(" Desconto: R$ %.2f \n", desconto);
    printf(" Valor da compra com desconto: R$ %.2f \n\n", valorComDesconto);

    return 0;
}
