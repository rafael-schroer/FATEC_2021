#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int aresta, area;
    printf("Digite a medida da aresta do quadrado: ");
    scanf("%i", &aresta);

    area = aresta * aresta;

    printf("A area de um quadrado com aresta de %i e de  %i unidades de area", aresta, area);

    return 0;
}