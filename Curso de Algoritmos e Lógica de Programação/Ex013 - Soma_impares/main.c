#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, i, z;

    z = 0;
    i = 0;
    soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);

    if (x > y) {
        z = y;
        y = x;
        x = z;
    }

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("SOMA DOS IMPARES = %i\n", soma);

    return 0;
}
