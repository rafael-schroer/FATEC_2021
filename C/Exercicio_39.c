// Entrar via teclado com doze valores e armazená-los em uma matriz de ordem 3x4. Após a digitação dos valores solicitar uma constante multiplicativa, que deverá multiplicar cada valor matriz e armazenar o resultado na própria matriz, nas posições correspondentes.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int matriz[3][4];
    int i, j;
    int constante;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite uma constante: ");
    scanf("%d", &constante);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = matriz[i][j] * constante;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}