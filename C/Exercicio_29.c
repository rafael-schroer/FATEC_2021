//Exibir a soma dos números inteiros positivos do intervalo de um a cem.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, soma = 0;
    for (i = 1; i <= 100; i++)
    {
        soma += i;
    }
    printf("A soma dos numeros inteiros positivos do intervalo de um a cem e: %d\n", soma);
    return 0;
}