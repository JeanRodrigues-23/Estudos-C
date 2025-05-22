#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%i", &a);
    printf("Segundo valor: ");
    scanf("%i", &b);
    printf("Terceiro valor: ");
    scanf("%i", &c);

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    printf("MENOR: %i", menor);


    return 0;
}
