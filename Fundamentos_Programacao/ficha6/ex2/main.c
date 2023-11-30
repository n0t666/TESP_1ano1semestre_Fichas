#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

#define MAXIMO_QUARTOS 10

int menu_principal();
int inicializar_quartos();
void estado_quartos(int []);
void conta_quartos_estado(int []);
int ocupa_quarto(int []);
int desocupa_quarto(int []);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quartos[MAXIMO_QUARTOS],indice,n_quarto;
    char op;

    for(indice=0; indice<MAXIMO_QUARTOS; indice++)
    {
        quartos[indice]=inicializar_quartos();
    }

    do
    {
        op=menu_principal();
        switch(op)
        {
        case 'O':
            estado_quartos(quartos);
            n_quarto=ocupa_quarto(quartos);
            if(n_quarto>0)
            {
                quartos[n_quarto-1]=1;
            }
            break;
        case 'D':
            estado_quartos(quartos);
            n_quarto = desocupa_quarto(quartos);
            if(n_quarto>0)
            {
                quartos[n_quarto-1]=0;
            }
            break;
        case 'V':
            estado_quartos(quartos);
            conta_quartos_estado(quartos);
            break;
        }
    }
    while(op != 'S');
    return 1;

}

int menu_principal()
{
    char op;

    printf("(O)cupar quarto");
    printf("\n(D)escupar quarto");
    printf("\n(V)er estado dos quartos");
    printf("\n(S)air\n\n");
    printf("OPCAO ->");
    scanf(" %c",&op);

    op=toupper(op);

    return op;
}

int inicializar_quartos()
{
    return 0;
}

void estado_quartos(int todos_quartos[])
{
    for (int indice = 0; indice < MAXIMO_QUARTOS; ++indice)
    {
        if(todos_quartos[indice]==1)
        {
            printf("\n%d -> Ocupado",indice+1);
        }
        else if(todos_quartos[indice]==0)
        {
            printf("\n%d -> Livre",indice+1);
        }
    }

    printf("\n\n");
}

int ocupa_quarto(int todos_quartos[])
{
    int quarto,reserva=0;

    printf("Indique o nº do quarto que pretende ocupar: ");
    scanf("%d",&quarto);

    if(quarto>=1 && quarto<=MAXIMO_QUARTOS)
    {
        for (int indice = 0; indice < MAXIMO_QUARTOS; ++indice)
        {
            if(indice==quarto-1)
            {
                if(todos_quartos[indice]==0)
                {
                    reserva = quarto;
                }
                else if(todos_quartos[indice]==1)
                {
                    printf("\nO quarto já está ocupado\n\n");

                }

            }
        }
    }
    else
    {
        printf("\nO quarto não existe\n");
    }

    return reserva;

}

void conta_quartos_estado(int todos_quartos[])
{
    int ocupados=0,livres=0;
    for (int indice = 0; indice < MAXIMO_QUARTOS; ++indice)
    {
        if(todos_quartos[indice]==1)
        {
            ocupados++;
        }
        else if(todos_quartos[indice]==0)
        {
            livres++;
        }
    }

    printf("%d quartos ocupados\n",ocupados);
    printf("%d quartos livres\n\n",livres);

}

int desocupa_quarto(int todos_quartos[])
{
    int quarto,reserva=0;

    printf("Indique o nº do quarto que pretende desocupar: ");
    scanf("%d",&quarto);

    if(quarto>=1 && quarto<=MAXIMO_QUARTOS)
    {
        for (int indice = 0; indice < MAXIMO_QUARTOS; ++indice)
        {
            if(indice==quarto-1)
            {
                if(todos_quartos[indice]==1)
                {
                    reserva = quarto;
                }
                else if(todos_quartos[indice]==0)
                {
                    printf("\nO quarto já está desocupado\n\n");

                }

            }
        }
    }
    else
    {
        printf("\nO quarto não existe\n");
    }

    return reserva;

}
