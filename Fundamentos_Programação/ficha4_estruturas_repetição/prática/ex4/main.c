#include <stdio.h>

int main() {
    int m = 0, n = 0;
    float somatorio = 0;

    printf("Introduza o valor do limite inferior: ");
    scanf("%d", &m);
    printf("\nIntroduza o valor do limite superior: ");
    scanf("%d", &n);

    if (n>m) {
        for (int i = m; i <= n; i++) {
            somatorio = (2.0 * i) / (5.0 + (i * i));
        }


        printf("%f", somatorio);
    }

    return 0;
}
