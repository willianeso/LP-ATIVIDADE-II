#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*QUEST�O 1:
Voc� � um desenvolvedor de jogos e est� trabalhando em um novo jogo de aventura.
O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius,
o clima ser� ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima ser� chuvoso.
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima ser� nublado.*/


int main() {

    setlocale(LC_ALL, "");

    int temperatura;
    char clima[200];

    printf("\n Ol� aventureiro, vamos come�ar a a��o?\n");
    printf("--------> Aguarde 3 segundos. <--------");

    sleep(3);
    system("cls");

    printf("\n           Para come�ar o jogo\n");
    printf(" Digite quantos graus celsius est� fazendo hoje: ");
    scanf("%d", &temperatura);

    system("cls");

    if (temperatura > 25) {
        strcpy(clima, "ensolarado!");

    } else if (temperatura > 15) {        
        strcpy(clima, "nublado!");

    } else {
        strcpy(clima, "chuvoso.");
    }

    printf("\n O clima no jogo hoje ser� %s \n", clima);
    printf("      Boa sorte aventureiro!\n");

    return 0;
}
