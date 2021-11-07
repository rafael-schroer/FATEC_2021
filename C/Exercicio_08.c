// Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double peso, altura, imc;

    printf("Qual e o seu peso: ");
    scanf("%lf", &peso);

    printf("Qual e a sua altura: ");
    scanf("%lf", &altura);

    imc = (peso / (altura * altura));

    printf("O seu IMC e de:  %.2lf", imc);

    return 0;
}