// Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double custo1, custo2, custo3, custo4, custo5;
    double somatoria, troco, dinheiro;

    printf("Informe o valor do primeiro produto: ");
    scanf("%lf", &custo1);

    printf("Informe o valor do segundo produto: ");
    scanf("%lf", &custo2);

    printf("Informe o valor do terceiro produto: ");
    scanf("%lf", &custo3);

    printf("Informe o valor do quarto produto: ");
    scanf("%lf", &custo4);

    printf("Informe o valor do quinto produto: ");
    scanf("%lf", &custo5);

    somatoria = (custo1 + custo2 + custo3 + custo4 + custo5);

insere_saldo:

    printf("Quantos reais voce tem para pagar as compras: ");
    scanf("%lf", &dinheiro);

    if (dinheiro < somatoria)
    {
        printf("Voce precisa de mais dinheiro!! \n");
        goto insere_saldo;
    }

    troco = (dinheiro - somatoria);

    printf("Voce gastou R$ %.2lf, com um pagamento de R$ %.2lf, voce vai receber R$ %.2f de troco.", somatoria, dinheiro, troco);

    return 0;
}