#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cont, multi;

    printf("Deseja a tabuada para qual valor?");
    scanf("%i", &valor);

    for (cont = 1; cont <= 10; cont++) {
        multi = valor * (cont);
        printf("%i x %i = %i\n", valor, cont, multi);
    }


    return 0;
}
