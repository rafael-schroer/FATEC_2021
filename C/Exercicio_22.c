// Criar uma rotina de entrada que aceite somente um valor positivo.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
    float numero;

    printf("Digite um numero positivo: ");

    scanf("%f", &numero);

    while (numero <= 0)
    {
       printf("Digite um numero positivo: ");
        scanf("%f", &numero);
    }
    return 0;
}