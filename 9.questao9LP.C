#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
int numero;
int i;
int divisor = 0;

printf("Digite um numero: ");
scanf("%d", &numero);

system("cls");

for ( i = 2; i <= numero; i++)
{
    if (numero % i == 0)
    {
        divisor++;
    }
    
}
if (divisor == 2)
{
    printf(" %d não é um número primo.\n", numero);
}else{
    printf(" %d é um número primo.\n", numero);
}

getchar();
return 0;

}