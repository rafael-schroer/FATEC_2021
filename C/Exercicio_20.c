
// Uma escola com cursos em regime semestral, realiza duas avaliações durante o semestre e calcula a média do aluno, da seguinte maneira:

// MEDIA = (P1 + 2P2) / 3

// Fazer um programa para entrar via teclado com os valores das notas (P1 e P2) e calcular a média. Exibir a situação final do aluno (“Aprovado ou Reprovado”), sabendo que a média de aprovação é igual a cinco.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float p1, p2, media;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da P2: ");
    scanf("%f", &p2);

    media = (p1 + (2 * p2)) / 3;

    if (media >= 5)
    {
        printf("Aluno aprovado!\n");
    }
    else
    {
        printf("Aluno reprovado!\n");
    }

    return 0;
}