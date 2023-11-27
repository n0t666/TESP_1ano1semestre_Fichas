#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int hora=0,minuto=0,segundo=0;
    printf("Introduza a hora: ");
    hora = le_numero();
    printf("Introduza o minuto: ");
    minuto = le_numero();
    printf("Introduza os segundos: ");
    segundo = le_numero();
    if(hora >= 0 && hora<=23 && minuto >=0 && minuto <=59 && segundo >=0 && segundo <=59)
    {
        printf("\n%dh%dm%ds corresponde a %d segundos",hora,minuto,segundo,converte_em_segundo(hora,minuto,segundo));

    }
    else{
        printf("\nErro,a hora mínima é 00h00m00s e a hora máxima aceitável é 23h59m59s");
    }
    return 0;
}

int le_numero(void)
{
    int n=0;

    scanf("%d",&n);

    return n;


}

int converte_em_segundo (int hora, int minuto, int segundo)
{
    return (hora*3600) + (minuto*60) + segundo;

}
