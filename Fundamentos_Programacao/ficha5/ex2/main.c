#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    int numero;
    char opcao;

    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("************************ Menu Principal ******************************\n");
        printf("\nIntroduza um número inteiro: ");
        scanf("%d",&numero);
        printf("\n(W) Ciclo while");
        printf("\n(D) Ciclo do...while");
        printf("\n(F) Ciclo for");
        printf("\n(S) Sair");
        printf("\n\n\tOpção --> ");
        scanf(" %c",&opcao);
        opcao = toupper(opcao);
        switch(opcao)
        {
        case 'W':
            ciclo_while(numero);
            break;
        case 'D':
            ciclo_do_while(numero);
            break;
        case 'F':
            ciclo_for(numero);
            break;
        default:
            printf("\nEscolheu uma opção inválida\n");
        }
        printf("\nCarregue numa tecla para continuar ....");
        getch();
        system("cls");
    }
    while(opcao != 'S');
}

void ciclo_while(int num)
{

    int soma,contador;

    while(contador<num)
    {
        soma = soma+contador;
        contador++;
    }

    printf("\nSoma dos números inteiros de 1 até %d: %d\n",num,soma);

}

void ciclo_do_while(int num)
{
    int soma,contador;

    do
    {
        soma = soma+contador;
        contador++;
    }
    while(contador<num);

    printf("\nSoma dos números inteiros de 1 até %d: %d\n",num,soma);

}

void ciclo_for(int num)
{

    int soma,contador;

    for(contador=1; contador<num; contador++)
    {
        soma = soma +contador;
    }

    printf("\nSoma dos números inteiros de 1 até %d: %d\n",num,soma);

}

