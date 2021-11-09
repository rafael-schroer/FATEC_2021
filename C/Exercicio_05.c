// Entrar via teclado com o valor de uma temperatura em graus Celsius, calcular e exibir sua temperatura equivalente em Fahrenheit.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double tempC, tempF;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &tempC);
    tempF = ((tempC * 1.8) + 32);

    printf("A temperatura de %.2lf graus Celsius equivale a %.2lf graus Fahrenheit.", tempC, tempF);

    return 0;
}