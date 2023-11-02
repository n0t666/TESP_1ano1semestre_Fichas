#define LIMITE 25

#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int n_tentativas,tentativa,numero = rand() % LIMITE;

    do
    {
        printf("Introduza o n�mero: ");
        scanf("%d",&tentativa);
        if (tentativa>numero)
        {
            printf("Est� acima do n�mero pretendido\n");
        }
        else if(tentativa<numero)
        {
            printf("Est� abaixo do n�mero pretendido\n");
        }
    }
    while(tentativa != numero);
    printf("\nParab�ns � Acertou!!",numero);

}
