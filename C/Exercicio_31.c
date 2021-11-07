// Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ...


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int Bergamaschi;
    int Bergamaschi_1=1;
    int Bergamaschi_2=1;
    int Bergamaschi_3=1;
    int i;

    printf("Pressione qualquer tecla para iniciar a série de Bergamaschi\n");
    system("pause");

    for(i=0; i<20; i++){
        printf("%d\n", Bergamaschi);
        Bergamaschi = Bergamaschi_1 + Bergamaschi_2 + Bergamaschi_3;
        Bergamaschi_1 = Bergamaschi_2;
        Bergamaschi_2 = Bergamaschi_3;
        Bergamaschi_3 = Bergamaschi;
    }
return 0;
}