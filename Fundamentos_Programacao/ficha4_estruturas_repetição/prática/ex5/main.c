#include <stdio.h>

void main(void)
{
    int tamanho,linha,coluna;

    printf("Introduza o tamanho da letra: ");
    scanf("%d",&tamanho);
    printf("\n");
    for(linha= 1 ; linha<=tamanho; linha++)
    {
        for (coluna=1; coluna <=tamanho; coluna++)
            if (coluna == 1 || coluna == tamanho || coluna == linha)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("\n");

    }
}
