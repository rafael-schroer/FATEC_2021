// A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do tempo de percurso (t em s). Calcular e exibir a velocidade final de automóvel em km/h. Exibir mensagem de acordo com a tabela:


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float aceleracao, v_inicial, v_final, tempo;


    // Exibe as informações sobre o app na tela

    printf("Qual a aceleracao em em m/s^2: "); // Insercao do peso
    scanf("%f", &aceleracao);

    printf("Qual a velocidade inicial em m/s: "); // Insercao da altura
    scanf("%f", &v_inicial);

    printf("Qual foi o tempo do percurso em s: "); // Insercao do sexo
    scanf("%s", &tempo);

    v_final = (v_inicial + aceleracao * tempo)*3.6;

if (v_final <= 40)
{
    printf("Veiculo muito lento");
}
else if (v_final > 40 && v_final <= 60)
{
    printf("Velocidade permitida");
}
else if (v_final > 60 && v_final <= 80)
{
    printf("Velocidade de cruzeiro");
}
else if (v_final > 80 && v_final <= 120)
{
    printf("Veiculo rapido");
}
else if (v_final > 120)
{
    printf("Veiculo muito rapido");
}

    return 0;
}