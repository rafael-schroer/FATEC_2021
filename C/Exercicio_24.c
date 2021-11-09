// Entrar via teclado com o sexo de determinado usuário, aceitar somente “F” ou “M” como respostas válidas.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv[])
{

    char sexo;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    if (sexo == 'F' || sexo == 'M')
    {
        printf("Sexo: %c\n", sexo);
    }
    else
    {
        printf("Sexo inválido!\n");
    }
    return 0;
}