// Exibir a tabuada do número cinco no intervalo de um a dez.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}