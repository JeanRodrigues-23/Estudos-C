#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media, idade, soma, contagem;

    printf("Digite as idades:\n");
    scanf("%lf", &idade);

    soma = 0;
    contagem = 0;

    while (idade > 0) {
        soma = soma + idade;
        contagem = contagem + 1;
        scanf("%lf", &idade);
    }

    if (soma < 0) {
        printf("Impossivel calcular\n");
    }
    else {
        media = soma / contagem;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
