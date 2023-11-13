#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>


char menu_principal();
int confirma_saida();
int menu_opcaoA();

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int invalido,sair;
    char opcao_menu_principal;

    do
    {
        sair =1;
        opcao_menu_principal=menu_principal();

        switch(opcao_menu_principal)
        {
        case 'A':
            break;
        case 'B':
            break;
        case 'C':
            break;
        case'F':
            sair=confirma_saida();
            break;
        default:
            invalido = 1;
            printf("Opção inválida");
        }
    }
    while(invalido || sair !=1 );


    return;

}

char menu_principal()
{
    char opcao_selecionada;


    printf("************************ Menu Principal ******************************\n");
    printf("A - Opção A\n");
    printf("B - Opção B\n");
    printf("C - Opção C\n");
    printf("F - Fim\n\n");
    printf("Opção --> ");
    scanf(" %c",&opcao_selecionada);
    opcao_selecionada = toupper(opcao_selecionada);
    return opcao_selecionada;
}

int confirma_saida()
{
    int opcao;

    printf("\nDeseja realmente sair? [1 - Sair] [0 - Continuar] ");
    scanf("%d",&opcao);

    return opcao;
}

