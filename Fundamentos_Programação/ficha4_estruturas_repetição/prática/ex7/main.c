#define LIMITE 25

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int n_tentativas = 0, tentativa, numero = rand() % LIMITE;

    do
    {
        printf("Introduza o número: ");
        scanf("%d", &tentativa);
        if (tentativa > numero)
        {
            printf("Está acima do número pretendido\n");
        }
        else if (tentativa < numero)
        {
            printf("Está abaixo do número pretendido\n");
        }
        else if (tentativa == numero)
        {
            printf("\nParabéns – Acertou o número \"%d\" após %d tentativas!!", numero, n_tentativas + 1);
            break;
        }
        n_tentativas++;
    } while (n_tentativas < 5);

    if (n_tentativas >= 4){
        printf("\nExcedeu o limite de tentativas");
    }

    return 0;
}
