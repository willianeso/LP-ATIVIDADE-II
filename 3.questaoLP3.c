#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* QUEST�O 3: 
Em um projeto de classifica��o de alunos, desenvolva um programa que receba a nota de um aluno e 
determine sua classifica��o com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razo�vel"
   - Nota menor que 5: "Insuficiente"*/

int main () {

    setlocale(LC_ALL, "");
    
    float nota;
    

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    system("cls");

    if (nota >= 9){
        printf("Classifica��o: Excelente \n");
        
    } else if (nota >= 7 && nota < 9) {
        printf("Classifica��o: Bom \n");

    } else if (nota >= 5 && nota < 7) {
        printf("Classifica��o: Razo�vel \n");
        
    } else if (nota < 5) { 
        printf("Classifica��o: Insuficiente \n");
    
    }





    return 0;
}



