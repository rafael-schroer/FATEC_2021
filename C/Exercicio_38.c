// Armazenar seis valores em uma matriz de ordem 2x3. Apresentar os valores na tela.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int matriz[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

    return 0;
}