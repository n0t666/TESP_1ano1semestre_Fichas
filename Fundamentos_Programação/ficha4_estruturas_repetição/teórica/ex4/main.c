#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,soma;

    soma = 0;
    numero = 1;

    while(numero<=100)
    {
        printf("%d\n",numero);
        soma = numero + soma;
        numero++;
    }
    printf("\n%d\n",soma);


    return 0;
}
