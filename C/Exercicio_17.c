//Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int hip, cat1, cat2;

insere_medidas:

    hip = 0;
    cat1 = 0;
    cat2 = 0;

    printf("Digite a medida da hipotenusa: ");
    scanf("%i", &hip);

    printf("Digite a medida do primeiro cateto: ");
    scanf("%i", &cat1);

    printf("Digite a medida do segundo cateto: ");
    scanf("%i", &cat2);

    if ((cat1*cat1) + (cat2*cat2) == (hip*hip))

    {printf("\nTriangulo retangulo!\n");}
    
    else
    
    {printf("\nTriangulo nao retangulo!\n");}



return 0;
}