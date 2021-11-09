// Uma escola com cursos em regime semestral realiza duas avaliações durante o semestre e calcula a média do aluno, da seguinte maneira:
// MEDIA = (P1 + 2P2) / 3
// Fazer um programa para entrar via teclado com o valor da primeira nota (P1) e o programa deverá calcular e exibir quanto o aluno precisa tirar na
// segunda nota (P2) para ser aprovado, sabendo que a média de aprovação é igual a cinco.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    float p1, p2;

    printf("Digite a nota P1: ");
    scanf("%f", &p1);

    p2 = (15 - p1) / 2;

    printf("\nA nota necessária na P2 é: %.2f", p2);

    return 0;
}