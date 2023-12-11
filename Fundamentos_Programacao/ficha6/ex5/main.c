#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXIMO_FRASE 50

int verificar_vogal(char);


void main(void)
{

    int vogais,indice,frase_len;
    char frase[MAXIMO_FRASE],frase_invertida[MAXIMO_FRASE],caracter,frase_sem_espaco[MAXIMO_FRASE];

    printf("Introduza uma frase: ");
    fflush(stdin);
    fgets(frase,MAXIMO_FRASE,stdin);

    frase_len = strlen(frase);

    for (indice = 0; frase[indice] != '\0'; ++indice)
    {

        vogais += verificar_vogal(frase[indice]);
    }

    for (indice = 0; indice<frase_len; ++indice)
    {

        frase_invertida[indice] = frase[frase_len - indice -2];
    }

    retira_espacos(frase,frase_sem_espaco);



    printf("\nNúmero de vogais: %d",vogais);
    printf("\nFrase invertida:  %s",frase_invertida);
    printf("\nFrase invertida:  %s",frase_sem_espaco);
    return;
}

int verificar_vogal(char caracter)
{
    int isVogal = 0;

    caracter = tolower(caracter);

    if(caracter == 'a'|| caracter == 'e'|| caracter == 'i'|| caracter == 'o'|| caracter == 'u')
    {
        isVogal = 1;
    }

    return isVogal;
}


void retira_espacos(char string_original[],char string_sem_espacos[])
{
    int tamanho,indice,posicao = 0;
    tamanho = strlen(string_original);
    for(indice=0; indice < tamanho; indice++)
        if(string_original[indice]!=' ')
        {
            string_sem_espacos[posicao] = string_original[indice];
            posicao = posicao + 1;
        }

    string_sem_espacos[posicao] = '\0';
}

void ler_string(char *texto,char *string)
{

}
