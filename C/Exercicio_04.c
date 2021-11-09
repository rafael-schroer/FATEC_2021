#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, num3, num4, media;
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);
    printf("Digite o quarto numero: ");
    scanf("%i", &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A media aritmetica dos numeros digitados e:%i", media);

    return 0;
}