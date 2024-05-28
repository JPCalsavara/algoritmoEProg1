#include <stdio.h>

int main()
{
    int vet[10], i, j, troca;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (j = 9; j > 0; j--)
    {
        for (i = 0; i < j; i++)
            if (vet[i] < vet[i + 1])
            {
                troca = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = troca;
            }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d|", vet[i]);
    }
    return 0;
}