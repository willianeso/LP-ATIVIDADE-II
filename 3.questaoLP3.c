#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* QUESTÃO 3: 
Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e 
determine sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"*/

int main () {

    setlocale(LC_ALL, "");
    
    float nota;
    

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    system("cls");

    if (nota >= 9){
        printf("Classificação: Excelente \n");
        
    } else if (nota >= 7 && nota < 9) {
        printf("Classificação: Bom \n");

    } else if (nota >= 5 && nota < 7) {
        printf("Classificação: Razoável \n");
        
    } else if (nota < 5) { 
        printf("Classificação: Insuficiente \n");
    
    }





    return 0;
}



