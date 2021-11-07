//Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. Se a área for maior que 100, exibir a mensagem “Terreno grande”.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int base, altura, area;

    printf("Digite a medida da base do retangulo: ");
    scanf("%i", &base);

    printf("Digite a medida da altura do retangulo: ");
    scanf("%i", &altura);

    area = base * altura;

    if (area > 100)
    {
        printf(" Terreno grande");
    }
    return 0;
}