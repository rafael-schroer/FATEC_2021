#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int base, altura, area;
    printf("Digite a medida da base do triangulo: ");
    scanf("%i", &base);
    printf("Digite a medida da altura do triangulo: ");
    scanf("%i", &altura);

    area = (base * altura) / 2;

    printf("A area de um triangulo com base de %i, altura de %i, e de %i unidades de area", base, altura, area);

    return 0;
}