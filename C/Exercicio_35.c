// Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, na respectiva posição.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int numeros[20], res, multiplicador;

for(int i=0; i<20; i++)
{
printf("Digite um numero: ");
scanf("%d", &numeros[i]);
}

printf("Digite um multiplicador: ");
scanf("%d", &multiplicador);

for(int i=0; i<20; i++)
{
res = multiplicador*numeros[i];

printf("%i",&res);

}

return 0;
}

