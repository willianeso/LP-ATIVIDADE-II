#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5:
Enquanto voc� faz parte de uma equipe de desenvolvimento de software,
desenvolva um programa que solicite ao usu�rio que escolha um idioma de prefer�ncia
(1 - Ingl�s, 2 - Espanhol, 3 - Franc�s). Com base na escolha do usu�rio,
exiba a mensagem de boas-vindas no idioma selecionado.
*/

int main()
{

    setlocale(LC_ALL, "");

    int idioma;

    do {

        printf("   Idiomas:\n");
        printf(" 1 - Ingl�s\n");
        printf(" 2 - Espamhol\n");
        printf(" 3 - Franc�s\n\n");
        printf("Digite o n�mero do idioma desejado: ");
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
            printf(" Op��o inv�lida.\n\n");

            system("pause");
            system("cls");

            break;
        }

    } while (idioma < 1 || idioma > 3);

    return 0;
}
