#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define TOTAL_ATLETAS 20

int ler_inteiro(int,int);
float ler_float(float,float);
float registar_tempo(void);
char menu(void);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome_atletas[TOTAL_ATLETAS][30],op;
    int numero_dorsal_atletas[TOTAL_ATLETAS],tempo_corrida_atletas[TOTAL_ATLETAS];

    do
    {
        op=menu();
        switch(op)
        {
        case 'L':

            break;
        case 'T':
            break;
        case 'M':
            break;
        case 'I':
            break;
        case 'V':
            break;
        }


    }
    while(op!='S');


    return 0;
}

int ler_inteiro(int min,int max)
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


float ler_float(float min,float max)
{
    float num;
    printf("\nIntroduza um numero entre %f e %f :",min,max);
    do
    {
        scanf("%f",&num);
    }
    while(num < min || num > max);

    return num;
}

char menu()
{

    char op;

    printf("\nL - Ler tempo\n");
    printf("T – Todos os tempos registados\n");
    printf("\M – Média de tempos\n");
    printf("I – Tempos inferiores à média\n");
    printf("V – Vencedor\n");
    printf("S – Sair\n\n");
    printf("\n--> ");
    scanf(" %c",&op);

    op= toupper(op);

    return op;
}
