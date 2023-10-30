#include <stdio.h>
#include <locale.h>

#define VENCIMENTO_CAT1 600.00
#define VENCIMENTO_CAT2 750.00
#define VENCIMENTO_CAT3 1000.00

#define DEPENDENTE_CAT1 0.05
#define DEPENDENTES_CAT1 0.09

#define DEPENDENTE_CAT2 0.03
#define DEPENDENTES_CAT2 0.07

#define DEPENDENTE_CAT3 0.02
#define DEPENDENTES_CAT3 0.05


void main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num_dep,cat_trabalhador;
    float salario_final;

    printf("Introduza a sua categoria de trabalhador: ");
    scanf("%d",&cat_trabalhador);
    printf("Introduza o número de dependentes: ");
    scanf("%d",&num_dep);
    if(num_dep < 0){
        printf("\nIntroduziu um valor inválido");
        return;
    }
    switch(cat_trabalhador)
    {
    case 1:
        if (num_dep >= 2)
        {
            salario_final = (VENCIMENTO_CAT1) + (VENCIMENTO_CAT1*DEPENDENTES_CAT1);

        }
        else if (num_dep == 1)
        {
            salario_final = (VENCIMENTO_CAT1) + (VENCIMENTO_CAT1*DEPENDENTE_CAT1);
        }
        else if (num_dep <= 0)
        {
            salario_final = VENCIMENTO_CAT1;
        }
        break;
    case 2:
        if (num_dep >= 2)
        {
            salario_final = (VENCIMENTO_CAT2) + (VENCIMENTO_CAT2*DEPENDENTES_CAT2);

        }
        else if (num_dep == 1)
        {
            salario_final = (VENCIMENTO_CAT2) + (VENCIMENTO_CAT1*DEPENDENTE_CAT2);
        }
        else if (num_dep <= 0)
        {
            salario_final = VENCIMENTO_CAT2;
        }

        break;
    case 3:
        if (num_dep >= 2)
        {
            salario_final = (VENCIMENTO_CAT3) + (VENCIMENTO_CAT3*DEPENDENTES_CAT3);

        }
        else if (num_dep == 1)
        {
            salario_final = (VENCIMENTO_CAT3) + (VENCIMENTO_CAT3*DEPENDENTE_CAT3);
        }
        else if (num_dep <= 0)
        {
            salario_final = VENCIMENTO_CAT3;
        }
        break;
    default:
        printf("\nNão existe nenhuma correspondência para essa categoria");
    }
    printf("\nCom o bónus , o valor do salário será de: %.2f Euros\n",salario_final);
    return 0;
}
