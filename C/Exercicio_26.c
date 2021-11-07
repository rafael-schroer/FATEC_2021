// Entrar via teclado com um valor qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Após a digitação, exibir a tabuada do valor solicitado, no intervalo de um a dez.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num < 0)
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    }

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}