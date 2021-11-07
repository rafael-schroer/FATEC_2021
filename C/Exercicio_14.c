// Entrar via teclado com três valores distintos. Exibir o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, num3, nummaior;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3)
    {
        nummaior = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        nummaior = num2;
    }
    else
    {
        nummaior = num3;
    }

    printf("O maior numero e: %i", nummaior);

    return 0;
}