#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double b, a, area, perimetro, diagonal;

    // Leitura dos dados
    printf("Base do retangulo: ");
    scanf("%lf", &b);
    printf("Altura do retanglo: ");
    scanf("%lf", &a);

    // Calculando as variaveis
    area = b * a;
    perimetro = b * 2 + a * 2;
    diagonal = sqrt((pow(b, 2)+pow(a, 2)));

    // Saida de dados
    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
