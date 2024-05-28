#include <stdio.h>

int main()
{
    int num[20];
    int i,j,k, temp;

    for(i=0;i<20;i++)
    {
        num[i] = (i+1)*(i+1);
        printf("%d\n", num[i]);
    }

    for (j = 19; j > 0; j--)
    { // j: limite da última posição
        for (i = 0; i < j; i++)
        {
            for(k=0;k<20;k++)
            {
                // printf("%d|");
            }
            // Compara par a par:
            if (num[i] < num[i + 1])
            {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }
    for(i=0; i<20;i++)
    {
        printf("%d|", num[i]);
    }
    return 0;
}
