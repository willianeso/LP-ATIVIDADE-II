#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). Solicite ao usuário que escolha uma opção e, utilizando
o switch case, execute a funcionalidade correspondente à opção escolhida.*/

int main() {
    setlocale(LC_ALL, "");

    int opcao;

    do {

        printf("   Menu\n");
        printf(" 1 - Novo jogo\n");
        printf(" 2 - Carregar jogo\n");
        printf(" 3 - Configurações \n\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {

        case 1:
            printf("\n Novo jogo\n");
            printf(" Divirtasse.\n");

            break;
        case 2:
            printf("\n Carregando jogo.\n");
            printf(" Que bom te ver aqui novamente.\n");
            printf(" Continue de onde parou.\n")

                break;
        case 3:
            printf("\n Configurações.\n");
            printf("\n Escolha o que deseja configurar:\n");
            printf(" Volume\n");
            printf(" Sensibilidade\n");
            printf(" Gráficos\n");

            break;
        default:
            printf(" Opção inválida, tente novamente.\n\n");
        }

    } while (opcao < 1 || opcao > 3);

    return 0;
}
