#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PRECO_GASOLINA 1.85
#define PRECO_GASOLEO 1.80
#define PRECO_GPL 0.93

int obter_preco_combustivel(int);

float obter_kms();
float calcular_montante(int);
float calcular_consumo_medio(float,float);

char menu();

int main()
{
    char opcao;

    float kms;

    setlocale(LC_ALL, "Portuguese");
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

    getchar();

    return kms;
}

float obter_preco_combustivel(){
}
