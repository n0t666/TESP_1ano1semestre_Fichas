#include <stdio.h>
#include <locale.h>


int main()
{
    int numero=0,resto,soma=0;


    printf("Introduza um número inteiro: ");
    scanf("%d",&numero);
    if(numero>0)
    {
        while(numero != 0)
        {
            soma = soma + (numero%10);
            numero = numero / 10;
        }
        printf("\nResultado:%d",soma);
    }

    return 0;
}
