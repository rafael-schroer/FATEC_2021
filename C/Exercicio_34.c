// Armazenar dez valores na memória do computador. Após a digitação dos valores, criar uma rotina para ler os valores e achar e exibir o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numeros[10];
    int maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    printf("O maior numero digitado foi: %d", maior);

    return 0;
}