#include <stdio.h>
#include <stdlib.h>

#define MAXIMO_FRASE 50
void main(void)
{
    char frase[MAXIMO_FRASE];

    printf("\nIntroduza uma frase: ");
    fflush(stdin);
    fgets(frase,MAXIMO_FRASE,stdin);

    getchar();
}
