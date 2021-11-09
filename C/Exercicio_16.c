// A partir de três valores que serão digitados, verificar se formam ou não um triângulo. Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, todos os lados iguais. Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior que o outro, isto, para os três lados.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int vert1, vert2, vert3;

insere_medidas:

    vert1 = 0;
    vert2 = 0;
    vert3 = 0;

    printf("Digite a medida do primeiro vertice: ");
    scanf("%i", &vert1);

    printf("Digite a medida do segundo vertice: ");
    scanf("%i", &vert2);

    printf("Digite a medida do terceiro vertice: ");
    scanf("%i", &vert3);

    if (vert1 + vert2 > vert3 && vert3 + vert2 > vert1 && vert1 + vert3 > vert2)
    {
        {

            if ((vert1 == vert2) || (vert1 == vert3) || (vert2 == vert3))
            {
                if ((vert1 == vert2) && (vert2 == vert3))
                {
                    printf("Equilatero");
                }
                else
                {
                    printf("Isosceles");
                }
            }

            else
            {
                printf("Escaleno");
            }
        }
    }

    else
    {
        printf("\nNao e possivel formar um tringulo com as medidas informadas\n");
        goto insere_medidas;
    }

    return 0;
}