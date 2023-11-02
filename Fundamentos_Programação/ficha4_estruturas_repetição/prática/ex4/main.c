#include <stdio.h>

int main()
{
    int limite_inferior,limite_superior;
    float numerador,denominador,somatorio = 0;
    do
    {
        printf("Introduza o valor do limite inferior: ");
        scanf("%d", &limite_inferior);
        printf("\nIntroduza o valor do limite superior: ");
        scanf("%d", &limite_superior);
        if(limite_inferior>limite_superior)
        {
            printf("O limite inferior não pode ser maior que o limite superior\n");
        }
    }
    while(limite_inferior > limite_superior);

    for(somatorio=0; limite_inferior<=limite_superior; limite_inferior++)
    {
        numerador = 2.0 * limite_inferior;
        denominador = 5 + limite_inferior * limite_inferior;
        somatorio = somatorio + numerador / denominador;
    }
    printf("\nResultado = %f",somatorio);



    return 0;
}
