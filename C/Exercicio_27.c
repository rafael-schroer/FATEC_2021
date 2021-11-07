// Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Solicitar o intervalo que o programa que deverá calcular a tabuada do valor digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A), caso contrário, digitar novamente somente o segundo. Após a validação dos dados, exibir a tabuada do valor digitado, no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{
    int mult, v_ini, v_fim;

    printf("Digite o valor do multiplicador: ");
    scanf("%d", &mult);

    while (mult < 0)
    {
        printf("Digite o valor do multiplicador: ");
        scanf("%d", &mult);
    }

    printf("Digite o valor inicial: ");
    scanf("%d", &v_ini);

    printf("Digite o valor final: ");
    scanf("%d", &v_fim);

    while (v_fim < v_ini)

    {
        printf("Digite o valor final: ");
        scanf("%d", &v_fim);
    }

    for (int i = v_fim; i >= v_ini; i--)
    {
        printf(" %d x %d = %d\n", i, mult, mult * i);
    }
    return 0;
}