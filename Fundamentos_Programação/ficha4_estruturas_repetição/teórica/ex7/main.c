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
        printf("Introduza o número: ");
        scanf("%d",&tentativa);
        if (tentativa>numero)
        {
            printf("Está acima do número pretendido\n");
        }
        else if(tentativa<numero)
        {
            printf("Está abaixo do número pretendido\n");
        }
    }
    while(tentativa != numero);
    printf("\nParabéns – Acertou!!",numero);

}
