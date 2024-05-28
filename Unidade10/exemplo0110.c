#include <stdio.h>

#define NLIN 20
#define NCON 20
// Matriz adaptavel de tamanho com a recepção de valores e formação de matrizes
int main()
{
    int m[NLIN][NCON], l, c, numl, numc;
    scanf("%d %d", &numl, &numc);
    for (l = 0; l < numl; l++)
    {
        for (c = 0; c < numc; c++)
        {
            scanf("%d", &m[l][c]);
        }
    }
    for (l = 0; l < numl; l++)
    {
        for (c = 0; c < numc; c++)
        {
            printf("%2d", m[l][c]);
        }
        printf("\n");
    }
    return 0;
}