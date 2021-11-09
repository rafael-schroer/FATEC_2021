// Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float peso, altura, imc;

insere_numeros:

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    if (imc < 20)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 25)
    {
        printf("Acima do peso");
    }
    else
    {
        printf("Peso ideal");
    }

    return 0;
}