#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite dos numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);

    while (x != y) {
        if (x < y) {
            printf("CRESCENTE!\n");
        }
        else {
            printf("DECRESCENTE!\n");
        }
    printf("Digite outros dois numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);
    }

    return 0;
}
