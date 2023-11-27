#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");


    int num=0,i=1,resultado=0;

    printf("Introduza um numero inteiro [1-10]: ");
    scanf("%d",&num);
    if ( num >=1 && num <=10)
    {
        switch(num)
        {
        case 10:
            resultado = resultado + 10;
        case 9:
            resultado = resultado + 9;
        case 8:
            resultado = resultado +8;
        case 7:
            resultado = resultado +7;
        case 6:
            resultado = resultado +6;
        case 5:
            resultado = resultado +5;
        case 4:
            resultado = resultado +4;
        case 3:
            resultado = resultado +3;
        case 2:
            resultado = resultado +2;
        case 1:
            resultado = resultado +1;
            break;
        default:
            printf("\nNuméro inválido");

        }
    }
    else
    {
        printf("\nPor favor,introduza apenas um numero entre 1 e 10\n");
        return;
    }
    if(resultado>0)
    {
        printf("\nResultado = %d",resultado);
    }

    return 0;
}
