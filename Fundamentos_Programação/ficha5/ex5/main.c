#include <stdio.h>
#include <locale.h>


char menu()
{
    system("cls");

    char opcao ;

    printf("\t\t\tC�lculo de �reas\n");
    printf("Tri�ngulo: \t\t\t\t\t\t  Ret�ngulo: \n\n");
    printf("C�rculo: \t\t\t\t\t\t  Quadrado: \n\n");
    printf("OP��ES:\n");
    printf("        (T)ri�ngulo\n");
    printf("        (R)et�ngulo\n");
    printf("        (Q)uadrado\n");
    printf("        (C)�rculo\n");
    printf("        (F)im\n");
    printf("Selecione op��o:");
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


