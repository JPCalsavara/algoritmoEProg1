#include <stdio.h>

int main()
{
    float notas[20], num = 0;
    int i;
    for (i = 0; i < 20; i++)
    {
        scanf("%f", &notas[i]);
    }
    for (; num >= 0;)
    {
        scanf("%f", &num);
        if (num < 0)
            break;
        for (i = 0; notas[i] != num && i < 20; i++)
        {
        }

        if (i < 20)
            printf("existe\n", i);
        else
            printf("nao existe\n");
    }
    return 0;
}