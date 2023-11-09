#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



float le_numero();
float area(float);
float perimetro(float);
float volume(float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio,area_total,perimetro_total,volume_total;
    printf("Introduza o comprimento do raio: ");
    raio = le_numero();

    area_total = area(raio);
    perimetro_total = perimetro(raio);
    volume_total = volume(raio);-

    printf("\nA área do circunferência é de %.2f",area_total);
    printf("\nO perímetro da circunferência é de %.2f",perimetro_total);
    printf("\nO volume da circunferência é de %.2f",volume_total);
    return 0;
}

float le_numero(void)
{
    float n=0;

    scanf("%f",&n);

    if (n>0)
    {
        return n;
    }
}

float area(float raio)
{
    float area_c;

    area_c = M_PI * pow(raio,2);

    return area_c;
}

float perimetro(float raio)
{
    float perimetro_c;

    perimetro_c = 2 * M_PI * raio;

    return perimetro_c;
}

float volume(float raio)
{
    float volume_c;

    volume_c = (4/3)* M_PI * pow(raio,3);

    return volume_c;
}
