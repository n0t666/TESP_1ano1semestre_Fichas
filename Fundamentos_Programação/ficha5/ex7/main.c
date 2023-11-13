#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PRECO_GASOLINA 1.85
#define PRECO_GASOLEO 1.80
#define PRECO_GPL 0.93

float obter_preco_combustivel(int);
float obter_kms();
float calcular_montante(int,float);
float calcular_consumo_medio(float,float);
float calcular_litros(float,float);

char menu();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    float kms;


    do
    {
        opcao=menu();
        switch(opcao)
        {
        case 'I':
            kms=obter_kms();break;
        case 'C':
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

    fflush(stdin);
    printf("\nPressione enter para continuar...");
    getchar();

    return kms;
}

float obter_preco_combustivel(int tipo)
{
    float preco;

    switch(tipo){
        case 1: preco=PRECO_GASOLINA;break;
        case 2: preco=PRECO_GASOLEO;break;
        case 3: preco=PRECO_GPL;break;
        default: preco = 0;
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
