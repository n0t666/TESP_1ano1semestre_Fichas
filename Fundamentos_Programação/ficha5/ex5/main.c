
#include <stdio.h>
#include <locale.h>

#define PI 3.14159265359

char menu(int,int,int,int);
int le_numero();
int area_triangulo();
int area_retangulo();
int area_quadrado();
int area_circulo();


char menu(int triangulo,int retangulo,int quadrado,int circulo)
{
    system("cls");

    char opcao ;

    printf("\t\t\tC�lculo de �reas\n");
    printf("Tri�ngulo: %d \t\t\t\t\t\t  Ret�ngulo: %d \n\n",triangulo,retangulo);
    printf("C�rculo:   %d \t\t\t\t\t\t  Quadrado:  %d \n\n",circulo,quadrado);
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
    setlocale(LC_ALL, "Portuguese");

    int contagem_triangulo=0,contagem_retangulo=0,contagem_quadrado=0,contagem_circulo=0;
    char opcao;


    do
    {
        opcao=menu(contagem_triangulo,contagem_retangulo,contagem_quadrado,contagem_circulo);
        switch(opcao)
        {
        case 'T':
            contagem_triangulo+=area_triangulo();
            break;
        case 'R':
            contagem_retangulo+=area_retangulo();
            break;
        case 'Q':
            contagem_quadrado+=area_quadrado();
            break;
        case 'C':
            contagem_circulo+=area_circulo;
            break;
        default:
            printf("Op��o inv�lida\n");

        }
    }
    while(opcao!='F');
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

int area_triangulo(void)
{
    int base,altura;
    float area;
    printf("\nIntroduza o comprimento da base: ");
    base = le_numero();
    printf("\nIntroduza a altura : ");
    altura = le_numero();
    area = (base*altura)/2;

    printf("\nA �rea do tri�ngulo � de %2.f\n",area);

    getch();

    return 1;
}

int area_retangulo(void)
{
    int base,altura;
    float area;

    printf("\nIntroduza o comprimento da base: ");
    base = le_numero();
    printf("\nIntroduza a altura : ");
    altura = le_numero();
    area = base*altura;

    printf("\nA �rea do ret�ngulo � de %2.f\n",area);

    getch();

    return 1;

}

int area_quadrado(void)
{
    int lado1,lado2;
    float area;

    printf("\nIntroduza o comprimento do 1� lado: ");
    lado1 = le_numero();
    printf("\nIntroduza o comprimento do 2� lado: ");
    lado2 = le_numero();
    area = lado1*lado2;

    printf("\nA �rea do quadrado � de %2.f\n",area);

    getch();

    return 1;
}

int area_circulo(void)
{
    int raio;
    float area;

    printf("\nIntroduza o comprimento do raio: ");
    raio = le_numero();

    area = (PI) * (raio*raio);

    printf("\nA �rea do c�rculo � de %2.f\n",area);

    getch();

    return 1;

}


