#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valorM, valorP, area;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorM);

    area = largura * comprimento;
    valorP = valorM * area;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno: %.2lf\n", valorP);

    return 0;
}
