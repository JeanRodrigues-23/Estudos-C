#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    double media, somaAltura = 0, sub16, percentSub16 = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%i", &n);

    char vetNome[n][50];
    int vetIdade[n];
    double vetAltura[n];

    for (i = 0; i < n; i++) {
        printf("Dados da %ia pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(&vetNome[i]);
        printf("Idade: ");
        scanf("%i", &vetIdade[i]);
        if (vetIdade[i] < 16) {
            sub16 = sub16 + 1;
        }
        printf("Altura: ");
        scanf("%lf", &vetAltura[i]);
        somaAltura = somaAltura + vetAltura[i];
    }

    media = somaAltura / n;
    percentSub16 = sub16 * 100 / n;
    printf("\nAltura media = %.2lf\n", media);
    printf("Pessoas com menos de 16 anos = %.2lf %%\n", percentSub16);

    for (i = 0; i < n; i++) {
        if (vetIdade[i] < 16) {
            printf("%s\n", vetNome[i]);
        }
    }

    return 0;
}
