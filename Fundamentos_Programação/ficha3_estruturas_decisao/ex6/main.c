#include <stdio.h>


int main()
{
    int num=0,i=1,resultado=0;

    printf("Introduza um numero inteiro [1-10]: ");
    scanf("%d",&num);
    if ( num >=1 && num <=10)
    {
        resultado = num;
        do
        {
            resultado = resultado + i;
            i= i +1;
        }
        while (i < num);
        printf("\nResultado: %d",resultado);

    }else
    {
        printf("\nPor favor,introduza apenas um numero entre 1 e 10\n");
    }

    return 0;
}
