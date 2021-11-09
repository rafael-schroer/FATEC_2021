//Entrar via teclado, com dois valores distintos. Exibir o maior deles.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double num1, num2, nummaior;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    if (num1 > num2)
    {
        nummaior = num1;
    }
    else
        nummaior = num2;

    printf("O maior numero e: %.2f", nummaior);
    return 0;
}