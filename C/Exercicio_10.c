//Entrar via teclado, com dois valores distintos. Exibir o menor deles.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double num1, num2, nummenor;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    if (num1 < num2)
    {
        nummenor = num1;
    }
    else
        nummenor = num2;

    printf("O menor numero e: %.2f", nummenor);
    return 0;
}