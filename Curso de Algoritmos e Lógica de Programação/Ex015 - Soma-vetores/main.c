#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma = 0, media = 0;
    int i, n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &n);

    double a[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &a[i]);
        soma = soma + a[i];
    }

    printf("\nVALORES = ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", a[i]);
    }

    printf("\nSOMA = %.1lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.1lf", media);

    return 0;
}
