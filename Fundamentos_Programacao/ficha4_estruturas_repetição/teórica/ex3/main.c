#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    while(i <= 100)
    {
        printf("N�mero:\"%d\"\n",i);
        i++;
    }
    return 0;
}
