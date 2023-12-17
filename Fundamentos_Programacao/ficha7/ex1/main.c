#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

#define MAXIMO_ALUNOS 60

typedef struct
{
    int numero,nota_final;
    char nome[30];
} t_aluno;


int ler_numero(int,int numero_alunos);
int ler_dados_estudante(t_aluno vetor_alunos[],int numero_alunos);
void mostrar_dados_estudantes(t_aluno vetor_alunos[],int numero_alunos);
int procurar_estudante(t_aluno vetor_alunos[],int numero_alunos,int numero_estudante);
void alterar_nota_estudante(t_aluno vetor_alunos[],int numero_alunos) ;
float calcular_media_notas(t_aluno vetor_alunos[],int numero_alunos);
int calcular_nota_maxima(t_aluno vetor_alunos[],int numero_alunos);
int calcular_nota_minima(t_aluno vetor_alunos[],int numero_alunos);
float percentagem_notas_positivas(t_aluno vetor_alunos[],int numero_alunos);
void mostrar_estaticas(t_aluno vetor_alunos[],int numero_alunos);
void gravar_ficheiro(t_aluno vetor_alunos[],int numero_alunos);
void ler_ficheiro(t_aluno vetor_alunos[],int numero_alunos);
int menu_opcoes();
char confirma_saida();


void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    t_aluno vetor_estudantes[MAXIMO_ALUNOS];
    int total_estudantes=0,op_menu;
    char saida;
    do
    {
        op_menu = menu_opcoes();
        switch(op_menu)
        {
        case 1:
            if(total_estudantes > MAXIMO_ALUNOS)
            {
                printf("\nJá foi atingido o número máximo de estudantes");
            }
            else
            {
                total_estudantes += ler_dados_estudante(vetor_estudantes,total_estudantes);
            }
            break;
        case 2:
            if(total_estudantes == 0)
            {
                printf("\nNºao foram inseridos alunos");
            }
            else
            {
                total_estudantes += ler_dados_estudante(vetor_estudantes,total_estudantes);
            }
            getchar();
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
            saida = confirma_saida();
            break;
        default:
            printf("\nOpção inválida\n");
        }

    }
    while(saida !='S');
    return 0;
}


int menu_opcoes()
{
    int op;
    printf("1 - Inserir dados de um estudante");
    printf("\n2 - Mostrar dados dos estudantes");
    printf("\n3 - Alterar nota final de um estudante");
    printf("\n4 - Estatísticas das avaliações");
    printf("\n5 - Gravar dados em ficheiro");
    printf("\n6 - Ler dados de ficheiro");
    printf("\n0 - Sair");
    printf("\n\n--> ");
    scanf("%d",&op);

    return op;
}

char confirma_saida()
{
    char confirma;

    printf("\nDeseja realmente sair(S/N): ");
    scanf(" %c",&confirma);

    confirma= toupper(confirma);

    return confirma;
}

int ler_numero(int min,int max)
{
    int num;
    do
    {
        scanf("%d",&num);
        if(num < min)
        {
            printf("\nO número está abaixo do valor pretendido");
        }
        else if(num > max)
        {
            printf("\nO número está acima do valor pretendido");
        }
    }
    while(num < min || num > max);

    return num;
}

int ler_dados_estudante(t_aluno vetor_alunos[],int numero_alunos)
{
    int total_alunos,indice_aluno,numero_aluno;

    printf("\nEstudante Nº%d\n",numero_alunos+1);
    do
    {
        printf("Número de estudante:");
        numero_aluno = ler_numero(2190000,2199999);
        indice_aluno = procurar_estudante(vetor_alunos,numero_alunos,numero_aluno);
        if(indice_aluno == -1)
        {
            vetor_alunos[numero_alunos].numero = numero_aluno;
        }
        else
        {
            printf("\nErro: O aluno já existe!");
        }
    }
    while(indice_aluno !=-1);

    printf("Nome");
    fflush(stdin);
    sscanf("%30[^\n]", vetor_alunos[numero_alunos].nome);
    printf("Introduzir nota final do aluno\n");
    vetor_alunos[numero_alunos].nota_final = ler_numero(0,20);
    numero_alunos++;
    //fgets(vetor_alunos[numero_alunos].nome,31,stdin);
    return numero_alunos;
}

int procurar_estudante(t_aluno vetor_alunos[],int numero_alunos,int numero_estudante)
{
    int found = -1;

    for(int indice = 0; indice < numero_alunos; indice)
    {
        if (vetor_alunos[indice].numero == numero_estudante)
        {
            found =  indice;
        }
    }
    return found;
}

void alterar_nota_estudante(t_aluno vetor_alunos[],int numero_alunos)
{
    int numero_aluno,indice_aluno;
    printf("\nNúmero do aluno para o qual pretende alterar a nota \n");
    numero_aluno = ler_numero(2190000,219999);
    indice_aluno = procurar_estudante(vetor_alunos,numero_alunos,numero_aluno);
    if(indice_aluno == -1)
    {
        printf("Erro: O aluno não existe");
    }
    else
    {
        printf("Nota atual do aluno %d: %d\n",numero_aluno,vetor_alunos[indice_aluno].nota_final);
        printf("Introduza a nova nota final do aluno\n");
        vetor_alunos[indice_aluno].nota_final = ler_numero(0,20);
        printf("\nA nota do aluno %d foi alterada com sucesso.\n",numero_aluno);
    }
    getchar();
}
