//Exibir os trinta primeiros valores da série de Fibonacci. A série: 1, 1, 2, 3, 5, 8, ...

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int Fibonacci;
    int Fibonacci_1 = 0;
    int Fibonacci_2 = 1;
    int i;
    printf("Pressione qualquer tecla para iniciar a série de Fibonacci\n");
    system("pause");

    for (i = 0; i < 30; i++)
    {
        Fibonacci = Fibonacci_1 + Fibonacci_2;
        Fibonacci_1 = Fibonacci_2;
        Fibonacci_2 = Fibonacci;
        printf("%d\n", Fibonacci);
    }

    return 0;
}
