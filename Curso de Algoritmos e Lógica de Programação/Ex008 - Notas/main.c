#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFinal;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    //Calculo da nota final
    notaFinal = nota1 + nota2;

    //Sa�da de dados

    if (notaFinal > 60.0){
        printf("Nota final: %.1lf\n", notaFinal);
    }
    else {
        printf("REPROVADO!");
    }

    return 0;
}

