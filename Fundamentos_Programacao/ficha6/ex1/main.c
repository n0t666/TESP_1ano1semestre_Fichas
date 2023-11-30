#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

#define MAXIMO_ALUNOS 60

int ler_numero(int,int);
int ler_notas_alunos(void);
float calcular_media_notas(int [],int);
int calcular_nota_mais_alta(int [],int);
int calcular_nota_mais_baixa(int [],int);
int menu(void);


void mostrar_notas_alunos(int [],int);

void mostrar_notas_positivas(int [],int);
void mostrar_notas_negativas(int [],int);

char confirmar_saida(void);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int notas_estudantes[MAXIMO_ALUNOS],nota_maior,nota_menor;
    int num_estudantes = 0,op,indice;

    float media;

    char sair;

    do
    {
        op=menu();
        switch(op)
        {
        case 1:
            num_estudantes = ler_numero(1,MAXIMO_ALUNOS);
            for(indice=0; indice<num_estudantes; indice++)
            {
                notas_estudantes[indice] = ler_notas_alunos();
            }
            break;
        case 2:
            mostrar_notas_alunos(notas_estudantes,num_estudantes);
            break;
        case 3:
            media=calcular_media_notas(notas_estudantes,num_estudantes);
            printf("\nMédia dos %d estudantes = %2.f",num_estudantes,media);

            break;
        case 4:
            mostrar_notas_positivas(notas_estudantes,num_estudantes);
            break;
        case 5:
            mostrar_notas_negativas(notas_estudantes,num_estudantes);
            break;
        case 6:
            nota_maior = calcular_nota_mais_alta(notas_estudantes,num_estudantes);
            nota_menor = calcular_nota_mais_baixa(notas_estudantes,num_estudantes);
            printf("\nA nota mais baixa é de \"%d\" e a mais alta é de \"%d\" \n",nota_menor,nota_maior);
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
    printf("\nIntroduza um numero entre %d e %d :",min,max);
    do
    {
        scanf("%d",&num);
    }
    while(num < min || num > max);

    return num;
}

int ler_notas_alunos()
{
    int nota;

    printf("\nNota (0-20) = ");
    do
    {
        scanf("%d",&nota);
        if (nota < 0 || nota > 20)
        {
            printf ("Valor inválido!\n");
        }

    }
    while(nota < 0 || nota > 20);

    return nota;
}


int menu()
{
    int opcao;


    printf("\n1 - Registar notas dos estudantes\n");
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

    printf("Confirma Saida (S/N): ");
    do
    {
        scanf(" %c",&sair);
        sair = toupper(sair);
        if(sair != 'S' && sair !='N')
        {
            printf("Escolha invalida!\n");
        }
    }
    while(sair !='S' && sair !='N');
    return sair;
}

void mostrar_notas_alunos(int notas[],int n_estudantes)
{

    for (int indice=0; indice<n_estudantes; indice++)
    {
        printf("\nAluno Nº%d - Nota = %d",indice+1,notas[indice]);
    }
}
float calcular_media_notas(int notas[],int n_estudantes)
{
    int soma = 0;
    float media = 0;

    for (int indice = 0; indice < n_estudantes; ++indice)
    {
        soma += notas[indice];
    }

    if(n_estudantes >0)
    {
        media = soma / n_estudantes;
    }

    return media;
}

int calcular_nota_mais_alta(int notas[],int n_estudantes)
{
    int nota_maior = 0;

    for (int indice = 0; indice < n_estudantes; ++indice)
    {
        if(notas[indice]>nota_maior)
        {
            nota_maior = notas[indice];

        }
    }

    return nota_maior;
}

int calcular_nota_mais_baixa(int notas[],int n_estudantes)
{
    int nota_menor = 21;

    for (int indice = 0; indice < n_estudantes; ++indice)
    {
        if(notas[indice]<nota_menor)
        {
            nota_menor = notas[indice];

        }
    }

    return nota_menor;
}

void mostrar_notas_positivas(int notas[],int n_estudantes)
{
    printf("\nNotas positivas:\n");
    for (int indice=0; indice<n_estudantes; indice++)
    {
        if(notas[indice]>9)
        {
             printf("\nAluno Nº%d - Nota = %d",indice+1,notas[indice]);
        }
    }

}

void mostrar_notas_negativas(int notas[],int n_estudantes)
{
    printf("\nNotas negativas:\n");
    for (int indice=0; indice<n_estudantes; indice++)
    {
        if(notas[indice]<=9)
        {
             printf("\nAluno Nº%d - Nota = %d",indice+1,notas[indice]);
        }
    }

}

