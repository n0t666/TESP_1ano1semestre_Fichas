#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma,contador=0,num;

    printf("Introduza um n�mero inteiro: ");
    scanf("%d",&num);

    if(num <= 0)
    {
        return;
    }

    soma=num;

    /*
    while(contador<num)
    {
        soma = soma+contador;
        contador++;
    }


    for(contador=1; contador<num; contador++)
    {
        soma = soma +contador;
    }
    */

    do
    {
        soma = soma+contador;
        contador++;
    }
    while(contador<num);


    printf("Soma dos n�meros inteiros de 1 at� %d: %d",num,soma);

    return 0;
}
