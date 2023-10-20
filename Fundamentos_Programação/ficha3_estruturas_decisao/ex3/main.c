#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Introduza um numero inteiro: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("\nO numero \"%d\" corresponde ao mes de \"Janeiro\" ",num);
        break;
    case 2:
        printf("\nO numero \"%d\" corresponde ao mes de \"Fevereiro\" ",num);
        break;
    case 3:
        printf("\nO numero \"%d\" corresponde ao mes de \"Março\" ",num);
        break;
    case 4:
        printf("\nO numero \"%d\" corresponde ao mes de \"Abril\" ",num);
        break;
    case 5:
        printf("\nO numero \"%d\" corresponde ao mes de \"Maio\" ",num);
        break;
    case 6:
        printf("\nO numero \"%d\" corresponde ao mes de \"Junho\" ",num);
        break;
    case 7:
        printf("\nO numero \"%d\" corresponde ao mes de \"Julho\" ",num);
        break;
    case 8:
        printf("\nO numero \"%d\" corresponde ao mes de \"Agosto\" ",num);
        break;
    case 9:
        printf("\nO numero \"%d\" corresponde ao mes de \"Setembro\" ",num);
        break;
    case 10:
        printf("\nO numero \"%d\" corresponde ao mes de \"Outubro\" ",num);
        break;
    case 11:
        printf("\nO numero \"%d\" corresponde ao mes de \"Novembro\" ",num);
        break;
    case 12:
        printf("\nO numero \"%d\" corresponde ao mes de \"Dezembro\" ",num);
        break;
    default:
        printf("\nO numero \"%d\"  nao corresponde a nenhum mes",num);
    }
    printf("\n");
}
