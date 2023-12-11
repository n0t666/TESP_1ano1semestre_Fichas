#include <stdio.h>

void main(void)
{
    int num1,num2,resultado;
    char operacao;

    printf("Introduza dois numeros inteiros e a operacao aritmetica a realizar\n");
    printf("Numero 1: ");
    scanf("%d",&num1);
    printf("Numero 2: ");
    scanf("%d",&num2);
    printf("Operacao aritmetica: ");
    scanf(" %c",&operacao);
    switch(operacao)
    {
    case '*':
        resultado = num1 * num2;
        printf("\nResultado: %d ",resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("\nResultado: %d ",resultado);
        break;
    case '+':
        resultado = num1 + num2;
        printf("\nResultado: %d ",resultado);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Erro - Divisao por zero");
            return;
        }
        resultado = num1 / num2;
        printf("\nResultado: %d ",resultado);
        break;
    case '%':
        resultado = num1 % num2;
        printf("\nResultado: %d ",resultado);
        break;
    default:
        printf("\nOperador desconhecido");

    }
    return 0;
}
