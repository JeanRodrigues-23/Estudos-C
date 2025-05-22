#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, negativos, contNeg = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%i", &n);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%i,%i]: ", i+1, j+1);
            scanf("%i", &mat[i][j]);
            if (mat[i][j] < 0) {
                contNeg = contNeg + 1;
            }
        }
    }

    printf("Diagonal principal:\n");
    for (i = 0; i < n; i++) {
        printf("%i ", mat[i][i]);
    }

    printf("\nQuantidade de negativos = %i\n", contNeg);

    return 0;
}
