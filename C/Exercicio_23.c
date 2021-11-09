// Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. Caso contrário solicitar novamente apenas o segundo valor.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num2 < num1)
    {
        printf("Digite outro numero: ");
        scanf("%d", &num2);
    }

    return 0;
}