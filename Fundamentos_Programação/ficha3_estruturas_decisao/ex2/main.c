#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp1,comp2,comp3;

    printf("Introduza o primeiro numero inteiro: ");
    scanf("%d",&comp1);
    printf("\nIntroduza o segundo numero inteiro: ");
    scanf("%d",&comp2);
    printf("\nIntroduza o terceiro numero inteiro: ");
    scanf("%d",&comp3);

    comp1 = abs(comp1);
    comp2 = abs(comp2);
    comp3 = abs(comp3);

    if(((comp1 - comp2) < comp3) && comp3 < (comp1+comp2))
    {
        system("cls");
        printf("Pode-se formar um triangulo com as 3 medidas\n");
        if(comp1 == comp2 && comp2 == comp3)
        {
            printf("\nO triangulo e Equilatero\n");
        }
        else if (comp1 == comp2 || comp2 == comp3 || comp3 == comp1)
        {
            printf("\nO triangulo e Isosceles\n");
        }
        else
        {
            printf("\nO triangulo e Escaleno\n");

        }
    }
    else
    {
        printf("\nNao pode-se formar um triangulo com as 3 medidas\n");
    }
    getchar();
}
