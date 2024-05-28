#include <stdio.h>

int main()
{
    int vetMain[8], vetPosi[8] = {0}, vetNeg[8] = {0}, i;
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &vetMain[i]);
    }
    for (i = 0; i < 8; i++)
    {
        if (vetMain[i] > 0)
            vetPosi[i] = vetMain[i];
        else
            vetNeg[i] = vetMain[i];
    }
    // Mostrar os vetores
    for (i = 0; i < 8; i++)
    {
        printf("%d|", vetMain[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d|", vetPosi[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d|", vetNeg[i]);
    }
    printf("\n");
    return 0;
}