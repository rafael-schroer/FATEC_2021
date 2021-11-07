// Entrar com uma matriz de ordem MxN, onde a ordem também será escolhida pelo usuário, sendo que no máximo 10x10. A matriz não precisa ser quadrática. Após a digitação dos elementos, criar uma rotina de consulta, onde o usuário digita um valor e a rotina exibe em qual (ou quais) posição da matriz, o valor escolhido se encontra. Enviar mensagem comunicando se por acaso o valor não estiver armazenado na matriz. Perguntar ao usuário, se deseja ou não fazer nova consulta.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int M, N, i, j, valor, posicao, contador = 0;
    int matriz[10][10];
    printf("Digite a ordem da matriz: ");
    scanf("%d", &M);
    printf("Digite a ordem da matriz: ");
    scanf("%d", &N);
    printf("Digite os valores da matriz: \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor a ser consultado: ");
    scanf("%d", &valor);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matriz[i][j] == valor)
            {
                contador++;
                posicao = i;
                printf("O valor %d se encontra na posicao [%d][%d]\n", valor, i, j);
            }
        }
    }
    if (contador == 0)
    {
        printf("O valor %d nao se encontra na matriz\n", valor);
    }
    return 0;
}