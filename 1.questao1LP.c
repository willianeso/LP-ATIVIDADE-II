#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*QUESTÃO 1:
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura.
O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius,
o clima será ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso.
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.*/


int main() {

    setlocale(LC_ALL, "");

    int temperatura;
    char clima[200];

    printf("\n Olá aventureiro, vamos começar a ação?\n");
    printf("--------> Aguarde 3 segundos. <--------");

    sleep(3);
    system("cls");

    printf("\n           Para começar o jogo\n");
    printf(" Digite quantos graus celsius está fazendo hoje: ");
    scanf("%d", &temperatura);

    system("cls");

    if (temperatura > 25) {
        strcpy(clima, "ensolarado!");

    } else if (temperatura > 15) {        
        strcpy(clima, "nublado!");

    } else {
        strcpy(clima, "chuvoso.");
    }

    printf("\n O clima no jogo hoje será %s \n", clima);
    printf("      Boa sorte aventureiro!\n");

    return 0;
}
