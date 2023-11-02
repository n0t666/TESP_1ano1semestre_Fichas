#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    char opcao,sair;

    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("************************ Menu Principal ******************************\n");
        printf("\nA - Op��o A");
        printf("\nB � Op��o B");
        printf("\nC � Op��o C");
        printf("\nF � Fim");
        printf("\n\nOp��o --> ");
        scanf(" %c",&opcao);
        opcao = tolower(opcao);
        switch (opcao)
        {
        case 'a':
            printf("\nEscolheu a op��o A.\n");
            break;
        case 'b':
            printf("\nEscolheu a op��o B.\n");
            break;
        case 'c':
            printf("\nEscolheu a op��o C.\n");
            break;
        case 'f':
            printf("\nDeseja realmente sair do programa?[S]im / [N]�o: ");
            scanf(" %c",&sair);
            sair = tolower(sair);
            if (sair == 's')
            {
                return;
            }
            break;
        default:
            printf("\nEscolheu uma op��o inv�lida\n");
        }
        printf("\nCarregue numa tecla para continuar ....");
        getch();
        system("cls");
    }
    while(sair != 1);
    return 0;
}
