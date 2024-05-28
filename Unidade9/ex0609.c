#include <stdio.h>

int main (){
    int vetor1[10], vetor2[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&vetor1[i]);
    }
    for(i=0;i<10;i++)
    {
        scanf("%d",&vetor2[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d|%d|", vetor1[i], vetor2[i]);
    }
    printf("\n");
    return 0;
}