#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int num1,num2,num3;
    char ordem;

    printf("Introduza tr�s n�meros inteiros\n");
    printf("Numero1: ");
    scanf("%d",&num1);
    printf("Numero2: ");
    scanf("%d",&num2);
    printf("Numero3: ");
    scanf("%d",&num3);
    printf("\nIndique a ordenacao (C)rescente ou (D)ecrescente: ");
    scanf(" %c",&ordem);
    ordem = tolower(ordem);
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num2 < num3)
            {

                if (ordem == 'c')
                {
                    printf("\nOrdena��o Crescente: %d %d %d",num1,num2,num3);
                }
                else if(ordem == 'd')
                {
                    printf("\nOrdena��o Decrescente: %d %d %d",num3,num2,num1);
                }


            }
            else
            {
                if (ordem == 'c')
                {
                    printf("\nOrdena��o Crescente: %d %d %d",num1,num3,num2);
                }
                else if(ordem == 'd')
                {
                    printf("\nOrdena��o Decrescente: %d %d %d",num2,num3,num1);
                }
            }

        }
        else
        {
            if (ordem == 'c')
            {
                printf("\nOrdena��o Crescente: %d %d %d",num3,num1,num2);
            }
            else if(ordem == 'd')
            {
                printf("\nOrdena��o Decrescente: %d %d %d",num2,num1,num3);
            }
        }
    }
    else
    {
        if ( num1 > num3)
        {
            if (num2 > num3)
            {
                if (ordem == 'c')
                {
                    printf("\nOrdena��o Crescente: %d %d %d",num3,num2,num1);
                }
                else if(ordem == 'd')
                {
                    printf("\nOrdena��o Decrescente: %d %d %d",num1,num2,num3);
                }

            }
            else
            {
                if (ordem == 'c')
                {
                    printf("\nOrdena��o Crescente: %d %d %d",num2,num3,num1);
                }
                else if(ordem == 'd')
                {
                    printf("\nOrdena��o Decrescente: %d %d %d",num1,num3,num2);
                }
            }
        }
        else
        {
            if (ordem == 'c')
            {
                printf("\nOrdena��o Crescente:%d %d %d",num2,num1,num3);
            }
            else if(ordem == 'd')
            {
                printf("\nOrdena��o Decrescente:%d %d %d",num3,num1,num2);

            }
        }
    }


    return 0;
}




