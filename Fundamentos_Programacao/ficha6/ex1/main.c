#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#define MAXIMO_ALUNOS 60

int ler_numero(int,int);
int menu(void);


char confirmar_saida(void);



int main()
{
    int notas_estudantes[MAXIMO_ALUNOS];
    int num_estudantes = 0,op;
    char sair;

    do
    {
        op=menu();
        switch(op)
        {
        case 1:
            num_estudantes = ler_numero(1,MAXIMO_ALUNOS);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            sair=confirmar_saida();
            break;
        default:
            printf("Opçao inválida");

        }
    }
    while(op < 0 ||  op > 6 ||sair !='S');



    return 0;
}

int ler_numero(int min,int max)
{
    int num;
    printf("Introduza um numero entre %d e %d :",min,max);
    do
    {
        scanf("%d",&num);
    }
    while(num < min || num > max);

    return num;
}


int menu()
{
    int opcao;
    printf("1 - Registar notas dos estudantes\n");
    printf("2 - Mostrar notas\n");
    printf("3 - Mostrar média das notas\n");
    printf("4 - Mostrar notas positivas\n");
    printf("5 - Mostrar notas negativas\n");
    printf("6 - Mostrar nota mais alta e nota mais baixa\n");
    printf("0 - Sair\n\n");
    printf("Opção: ");
    scanf("%d",&opcao);

    return opcao;

}

char confirmar_saida()
{
    char sair;
    printf("Deseja realmente sair?[S]im [N]ão: ");
    scanf(" %c",&sair);

    return toupper(sair);
    printf("Confirma Saida (S/N): ");
    do
    {
        scanf(" %c",&sair);
        sair = toupper(sair);
        if(sair != 'S' && sair !='N')
        {
            printf("Escolha invalida!");
        }
    }
    while(sair !='S' && sair !='N');
    return sair;
}
