#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i, valor = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &n);
    int vet[n];

    for (i = 0; i < n; i++) {
       printf("Digite um numero: ");
       scanf("%i", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    for (i = 0; i < n; i++) {
        if (vet[i] < 0) {
            printf("%i\n", vet[i]);
        }
    }

    return 0;
}
