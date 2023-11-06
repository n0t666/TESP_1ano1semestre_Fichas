#include <stdio.h>
#include <locale.h>


char menu()
{
    system("cls");

    char opcao ;

    printf("\t\t\tCálculo de Áreas\n");
    printf("Triângulo: \t\t\t\t\t\t  Retângulo: \n\n");
    printf("Círculo: \t\t\t\t\t\t  Quadrado: \n\n");
    printf("OPÇÕES:\n");
    printf("        (T)riângulo\n");
    printf("        (R)etângulo\n");
    printf("        (Q)uadrado\n");
    printf("        (C)írculo\n");
    printf("        (F)im\n");
    printf("Selecione opção:");
    scanf(" %c",&opcao);
    return opcao;
}

int main()
{
    char opcao;

    setlocale(LC_ALL, "Portuguese");
    do{
    opcao=menu();
    }while(opcao!='F');
    return 0;
}


int le_numero(void)
{
    int n=0;

    scanf("%d",&n);

    if (n>0)
    {
        return n;
    }

}


