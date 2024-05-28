#include <stdio.h>

#define NLIN 20
#define NCON 20
// Matriz adaptavel de tamanho com a recepção de valores e formação de matrizes transpostas
int main()
{
    int m[NLIN][NCON], l, c, numl, numc;
    scanf("%d %d", &numl, &numc);
    int mt[numc][numl];
    // Ler matriz principal
    for (l = 0; l < numl; l++)
    {
        for (c = 0; c < numc; c++)
        {
            scanf("%d", &m[l][c]);
        }
    }
    // Atribuição da matriz principal na matriz transposta
    for (l = 0; l < numl; l++)
    {
        for (c = 0; c < numc; c++)
        {
            mt[c][l] = m[l][c];
        }
    }

    for (c = 0; c < numc; c++)
    {
        for (l = 0; l < numl; l++)
        {
            printf("%d ", mt[c][l]);
        }
        printf(" \n");
    }
    printf("\n");
    return 0;
}