#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5:
Enquanto você faz parte de uma equipe de desenvolvimento de software,
desenvolva um programa que solicite ao usuário que escolha um idioma de preferência
(1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário,
exiba a mensagem de boas-vindas no idioma selecionado.
*/

int main()
{

    setlocale(LC_ALL, "");

    int idioma;

    do {

        printf("   Idiomas:\n");
        printf(" 1 - Inglês\n");
        printf(" 2 - Espamhol\n");
        printf(" 3 - Francês\n\n");
        printf("Digite o número do idioma desejado: ");
        scanf("%d", &idioma);

        system("cls");

        switch (idioma) {

        case 1:
            printf(" Welcome!\n");

            break;
        case 2:
            printf(" Sea bienvenido!\n");

            break;
        case 3:
            printf(" Accueillir!\n");
            break;
        default:
            printf(" Opção inválida.\n\n");

            system("pause");
            system("cls");

            break;
        }

    } while (idioma < 1 || idioma > 3);

    return 0;
}
