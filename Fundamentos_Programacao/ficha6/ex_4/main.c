#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAMANHO_MATRIZ 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));



    int matriz_x [TAMANHO_MATRIZ] [TAMANHO_MATRIZ],num,linha,coluna,contador;

    for(linha = 0; linha <TAMANHO_MATRIZ; linha++)
    {
        for ( coluna=0; coluna <TAMANHO_MATRIZ; coluna++)
        {
            matriz_x[linha][coluna]= rand() % 100;
            printf("%d\t",matriz_x[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nIntroduza o valor X: ");
    scanf("%d",&num);

    for( linha = 0; linha <TAMANHO_MATRIZ; linha++)
    {
        for ( coluna=0; coluna <TAMANHO_MATRIZ; coluna++)
        {
            if(matriz_x[linha][coluna]==num)
            {
                printf("\nLinha: %d Coluna: %d -> Valor: %d",linha,coluna,matriz_x[linha][coluna]);
                contador++;
            }


        }
    }

    if(contador <=0)
    {
        printf("\nValor não encontrado!");

    }



    return 0;
}
