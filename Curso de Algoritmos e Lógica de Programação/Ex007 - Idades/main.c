#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    // Variaveis
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    // Entrada de dados
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%i", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%i", &idade2);

    //Cálculo de media
    media = (double)(idade1 + idade2) / 2;

    // Saída de dados
    printf("A idade media de %s e %s e de %.1lf anos.", nome1, nome2, media);


    return 0;
}
