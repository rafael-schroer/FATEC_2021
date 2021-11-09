//Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float peso, altura, imc;
    char sexo;

    // Exibe as informações sobre o app na tela

    printf("App para cálculo e validacao do IMC \n ");

    printf("Digite o seu peso em kg: "); // Insercao do peso
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: "); // Insercao da altura
    scanf("%f", &altura);

    printf("Digite o seu sexo : "); // Insercao do sexo
    scanf("%s", &sexo);

    // Calculo do IMC
    imc = peso / (altura * altura);

    if (sexo == 'm' || sexo == 'M')
    {
        if (imc < 20)
        {
            printf("Voce esta abaixo do peso ideal");
        }
        else if (imc >= 20 && imc <= 25)
        {
            printf("Voce esta no peso ideal");
        }
        else if (imc > 25)
        {
            printf("Voce esta com sobrepeso");
        }
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        if (imc < 19)
        {
            printf("Voce esta abaixo do peso ideal");
        }
        else if (imc >= 19 && imc <= 24)
        {
            printf("Voce esta no peso ideal");
        }
        else if (imc > 24)
        {
            printf("Voce esta com sobrepeso");
        }
    }
return 0;
}