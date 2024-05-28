#include <stdio.h>

int main()
{
    float temps[12], menorNum, maiorNum;
    char meses[12][20] = {{"Ja"},{"F"},{"Mar"},{"A"},{"Maio"},{"Jun"}, {"Jul"},{"Ag"},{"Set"},{"Out"},{"Nov"}, {"Dez"}};
    int i, j, troca;
    // Atribuição das temperaturas
    for (i = 0; i < 12; i++)
    {
        scanf("%f", &temps[i]);
    }
    // Descubrir a menor temperatura
    for (j = 11; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (temps[i] > temps[i + 1])
            {
                troca = temps[i];
                temps[i] = temps[i + 1];
                temps[i + 1] = troca;
                troca = meses[i];
                meses[i] = meses[i+1];
                meses[i+1] = troca;
            }
        }
    }
    menorNum = temps[0];
    maiorNum = temps[11];
    printf("Maior\nMes:%s Temp:%.2f\n\nMenor\nMes:%s Temp:%.2f\n", meses[11], maiorNum, meses[0], menorNum);
    return 0;
}