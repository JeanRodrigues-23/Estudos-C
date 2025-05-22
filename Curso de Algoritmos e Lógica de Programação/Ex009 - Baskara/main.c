#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2;

    //Entrada de dados
    printf("Coeficiente A: ");
    scanf("%lf", &a);
    printf("Coeficiente B: ");
    scanf("%lf", &b);
    printf("Coeficiente C: ");
    scanf("%lf", &c);

    // Saida de dados
    if (a == 0 || pow(b, 2) - 4 * a * c < 0){
        printf("Esta equacao nao possui raizes reais.\n");
    }
    else {
        x1 = (- b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (- b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;
}
