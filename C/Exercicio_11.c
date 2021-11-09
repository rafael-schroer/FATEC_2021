//Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, enviar mensagem avisando que os números são idênticos.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, nummaior;

insere_numeros:

    num1 = 0;
    num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    if (num1 == num2)
    {
        printf("\n Os valores digitados sao iguais. Digite outros numeros!\n");

        goto insere_numeros;
    }
    else if (num1 > num2)
    {
        nummaior = num1;
    }
    else
    {
        nummaior = num2;
    }

    printf("O maior numero e: %i", nummaior);

    return 0;
}