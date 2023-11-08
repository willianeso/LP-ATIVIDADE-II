#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exercício 4: 
Em um projeto de controle de acesso, crie um programa que solicite ao usuário sua idade e verifique 
se ele tem permissão para acessar um determinado recurso. Se a idade for maior ou igual a 18, exiba a mensagem 
"Acesso permitido". Caso contrário, exiba a mensagem "Acesso negado".
*/

int main() {

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite sua idade para continuar: ");
    scanf("%d", &idade);

    system("cls");
    
    if (idade >= 18) {
        printf("Acesso permitido!\n");

    } else {
        printf("Acesso negado.\n");
    }
    




    return 0;
}
