// Armazenar um máximo de 20 valores em um vetor. A quantidade de valores a serem armazenados será escolhida pelo usuário. Enviar mensagem de erro, caso a quantidade de valores escolhida esteja fora da faixa possível e solicitar a quantidade novamente. Após a digitação dos valores, criar uma rotina de consulta, onde o usuário digita um número e o programa exibe em qual posição do vetor este número está localizado. Se o número não for encontrado, enviar mensagem “Valor não encontrado!”. Perguntar ao usuário se deseja ou não fazer uma nova consulta, consistir a resposta e encerrar o programa em caso negativo.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n, valor, posicao;
    int vetor[20];

    printf("Digite a quantidade de valores que deseja armazenar: ");
    scanf("%d", &n);

    while(n > 20){
        printf("\n\nA quantidade de valores digitada é maior que o permitido!\n\n");
        printf("Digite novamente a quantidade de valores que deseja armazenar: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor);
        vetor[i] = valor;
    }

    printf("\n\nDigite o valor que deseja consultar: ");
    scanf("%d", &valor);

    for(i = 0; i < n; i++){
        if(vetor[i] == valor){
            posicao = i + 1;
            printf("\n\nO valor %d esta na posicao %d do vetor.\n\n", valor, posicao);
            break;
        }
    }

    if(i == n){
        printf("\n\nO valor nao foi encontrado!\n\n");
    }

    printf("\n\nDeseja fazer uma nova consulta? (s/n): ");
    scanf(" %c", &valor);

    if(valor == 's'){
        main(argc, argv);
    }

    return 0;
}
