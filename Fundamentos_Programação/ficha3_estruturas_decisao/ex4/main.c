#include <stdio.h>

void main(void)
{
    float compras_efect,desconto,valor_final;

    printf("Indique o valor das compras efetuadas: ");
    scanf("%f",&compras_efect);
    if ( compras_efect <= 500)
    {
        desconto = 0.00;
        printf("\nAo fazer compras no valor total de %.3f nao tera qualquer tipo de desconto",compras_efect);
        return;
    }
    else if ( compras_efect > 500 && compras_efect <= 1250)
    {
        desconto = 0.04;
    }
    else if ( compras_efect > 1250 && compras_efect <= 2000)
    {
        desconto = 0.06;
    }
    else
    {
        desconto = 0.08;
    }
    valor_final = (compras_efect - (compras_efect * desconto));
    printf("\nAo fazer compras no valor total de %.3f  tera \"%.2f%%\" de desconto,ou seja o valor final sera %.3f\n",compras_efect,desconto,valor_final);


    return 0;
}
