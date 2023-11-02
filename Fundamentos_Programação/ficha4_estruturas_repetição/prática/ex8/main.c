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
        printf("\nA - Opção A");
        printf("\nB – Opção B");
        printf("\nC – Opção C");
        printf("\nF – Fim");
        printf("\n\nOpção --> ");
        scanf(" %c",&opcao);
        opcao = tolower(opcao);
        switch (opcao)
        {
        case 'a':
            printf("\nEscolheu a opção A.\n");
            break;
        case 'b':
            printf("\nEscolheu a opção B.\n");
            break;
        case 'c':
            printf("\nEscolheu a opção C.\n");
            break;
        case 'f':
            printf("\nDeseja realmente sair do programa?[S]im / [N]ão: ");
            scanf(" %c",&sair);
            sair = tolower(sair);
            if (sair == 's')
            {
                return;
            }
            break;
        default:
            printf("\nEscolheu uma opção inválida\n");
        }
        printf("\nCarregue numa tecla para continuar ....");
        getch();
        system("cls");
    }
    while(sair != 1);
    return 0;
}
