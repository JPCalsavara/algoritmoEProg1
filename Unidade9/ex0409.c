#include <stdio.h>

int main (){
    int quantidade[10],i, quantidadeTotal=0;
    float preco[10], precoTotal=0;
    for(i=0;i<10;i++)
    {
        scanf("%d", &quantidade[i]);
    }
    for(i=0;i<10;i++)
    {
        scanf("%f", &preco[i]);
    }
    for(i=0;i<10;i++)
    {
        quantidadeTotal += quantidade[i];
    }
    for(i=0;i<10;i++)
    {
        precoTotal += quantidade[i]*preco[i];
    }
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", precoTotal, quantidadeTotal);

    return 0;
}