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

    printf("A area de um retangulo com base de %i, altura de %i, e de  %i unidades de area", base, altura, area);

    return 0;
}