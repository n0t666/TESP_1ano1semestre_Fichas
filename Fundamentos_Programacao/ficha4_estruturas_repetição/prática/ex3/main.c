#include <stdio.h>

void main(void)
{

    int total_saltos = 0;
    float salto,maior_salto = 0,menor_salto=0,soma_saltos = 0,media = 0;


    printf("Introduza o comprimento do salto (0 para terminar): ");

    while (salto != 0.0 || salto !=0)
    {
        if (salto > 0.0)
        {
            total_saltos++;
            soma_saltos = soma_saltos + salto;

            if (total_saltos == 1)
            {
                maior_salto = menor_salto = salto;
            }
            else
            {
                if (salto > maior_salto)
                {
                    maior_salto = salto;
                }
                if (salto < menor_salto)
                {
                    menor_salto = salto;
                }
            }
        }
        printf("Introduza o comprimento do salto (0 para terminar): ");
        scanf("%f", &salto);
    }

    if (total_saltos > 0)
    {
        media = soma_saltos / total_saltos;
        printf("Número total de saltos: %d\n", total_saltos);
        printf("Maior comprimento de salto: %.2f\n", maior_salto);
        printf("Menor comprimento de salto: %.2f\n", menor_salto);
        printf("Média de comprimentos de salto: %.2f\n", media);
    }
    else
    {
        printf("Nenhum salto válido foi introduzido.\n");
    }

    return 0;
}
