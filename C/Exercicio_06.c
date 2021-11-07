// Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares.Calcular e exibir o valor correspondente em Reais (R$).

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double conversao, cotacao, dolares;

    printf("Informe a cotacao do dolar: ");
    scanf("%lf", &cotacao);

    printf("Quantos dolares deseja comprar: ");
    scanf("%lf", &dolares);

    conversao = (cotacao * dolares);

    printf("Para comprar  %.2lf Dolares, voce vai precisar desembolsar %.2lf Reais.", dolares, conversao);

    return 0;
}