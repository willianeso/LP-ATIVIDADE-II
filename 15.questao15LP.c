#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*QUESTÃO 15:
Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo, 
quilômetros para milhas e Celsius para Fahrenheit. O programa deve permitir ao usuário escolher a conversão 
desejada e repetir o processo para vários valores. Utilize o switch case  e continue mostrando as opções para 
conversão até o usuário digite 0 para sair do programa.*/

int main() {
    int opcao;
    float valor;

    setlocale(LC_ALL,"");

    do {
        printf("0 - Sair do programa\n\n");
        printf("1 - Quilometros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {
            case 0:
                printf("Saindo do programa.\n");

                break;
            case 1:
                printf("Digite um valor em quilômetros: ");
                scanf("%f", &valor);

                printf("%.2f quilômetros equivalem a %.2f milhas.\n", valor, valor * 0.621371);

               

                break;
            case 2:
                printf("Digite o valor em graus celsius: ");
                scanf("%f", &valor);

                printf("%.2f graus Celsius equivalem a %.2f graus fahrenheit.\n", valor, (valor * 9/5) + 32);

                

                break;
            default:
                printf("Opcao inválida. Tente novamente.\n\n");

                break;
        }

        printf("\n");

        
    } while (opcao != 0);


    getchar();
    return 0;
}