// Armazenar dez números na memória do computador. Exibir os valores na ordem inversa à da digitação.


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d :  ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}