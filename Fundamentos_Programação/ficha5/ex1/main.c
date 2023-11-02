#include <stdio.h>


int main()
{
    funcao1();
    printf("\nEstou entre as chamadas das funcoes 1 e 2");
    funcao2();
    return 0;
}

void funcao1()
{
    printf("Estou na funcao 1");
}

void funcao2()
{
    printf("\nEstou na funcao 2\n");
}

