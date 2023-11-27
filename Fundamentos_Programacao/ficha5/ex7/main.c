#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PRECO_GASOLINA 1.85
#define PRECO_GASOLEO 1.80
#define PRECO_GPL 0.93

float obter_preco_combustivel(int);
float obter_kms(void);
float obter_dinheiro(void);
float calcular_montante(float,float);
float calcular_consumo_medio(float,float);
float calcular_litros(float,float);

char menu();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    int tipo_combs;

    float kms = 0,total_litros=0,dinheiro = 0,preco_litro,cons_medio;



    do
    {
        opcao=menu();
        switch(opcao)
        {
        case 'I':
            kms+=obter_kms();
            printf("Introduza o tipo de combustivel(1,2,3): ");
            scanf("%d",&tipo_combs);
            preco_litro=obter_preco_combustivel(tipo_combs);
            calcular_montante(preco_litro,kms);

            break;

        case 'C':
            printf("Introduza a quantidade de litros gastos: ");
            scanf("%f",&total_litros);
            printf("Consumo médio: %f",calcular_consumo_medio(total_litros,kms));
            break;

        }
    }
    while(opcao!='T');
    return 0;
}

char menu()
{
    system("cls");

    char opcao ;
    printf("OPÇÕES:\n");
    printf("        (I)ntroduzir percurso\n");
    printf("        (C)onsumo médio\n");
    printf("        (T)erminar\n\n");
    printf("     -> ");
    scanf(" %c",&opcao);
    return opcao;
}

float obter_kms()
{
    float kms;

    printf("\nIntroduza a distância do percurso: ");
    scanf("%f",&kms);

    return kms;
}

float obter_preco_combustivel(tipo)
{
    float preco;




    switch(tipo)
    {
    case 1:
        preco=PRECO_GASOLINA;
        break;
    case 2:
        preco=PRECO_GASOLEO;
        break;
    case 3:
        preco=PRECO_GPL;
        break;
    default:
        preco = 0;
    }

    return preco;
}

float calcular_montante(float preco,float kms)
{
    return preco * kms;
}

float calcular_consumo_medio(float litros,float distancia)
{
    return (litros * 100) / (distancia);
}

float obter_dinheiro()
{
    float dinheiro_despendido;
    do
    {
    printf("Introduza o dinheiro despendido: ");
    scanf("%f",&dinheiro_despendido);
    if(dinheiro_despendido)


    }


}

