#include <stdio.h>
#include <math.h>
#include <locale.h>

double raiz_quadrada(int num)
{
    return sqrt(num);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1,numero2,resultado_soma,resultado_subtracao;

    printf("Introduza o número 1: ");
    scanf("%d",&numero1);
    printf("Introduza o número 2: ");
    scanf("%d",&numero2);

    printf("\nSoma = %d",soma(numero1,numero2));
    printf("\nSubtração = %d",subtracao(numero1,numero2));
    printf("\nRaiz quadrada (%d) = %.2f",numero1,raiz_quadrada(numero1));
    printf("\nRaiz quadrada (%d) = %.2f",numero2,raiz_quadrada(numero2));
    printf("\nPotencia (%d, %d) = %d",numero1,numero2,potencia(numero1,numero2));
    printf("\nPotencia (%d, %d) = %d",numero2,numero1,potencia(numero2,numero1));
    return 0;
}

int soma(int num1,int num2)
{
    return num1+num2;
}

int subtracao(int num1,int num2)
{
    return num1-num2;
}


int potencia(int num1,int num2)
{
    return pow(num1,num2);
}

