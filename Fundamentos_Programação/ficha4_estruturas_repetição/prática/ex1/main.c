#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num,i=0;

    do
    {
        printf("Introduza um numero inteiro: ");
        scanf("%d",&num);
        if( num == 0)
        {
            printf("\nO numero \"%d\" e do tipo nulo\n",num);
        }

        if (num > 0)
        {
            printf("\nO numero e positivo\n");
        }
        else if (num < 0)
        {
            printf("\nO numero e negativo");
        }

        if (num % 2 == 0)
        {
            printf("\nO numero e par\n");
        }
        else
        {
            printf("\nO numero e impar\n");
        }
        printf("\n-----------------------------------------\n");
        printf("\nDeseja continuar(1=\"Sim\",2=\"Não\"):  ");
        scanf("%d",&i);
        system("cls");
    }
    while(i!=2);

    return 0;
}
