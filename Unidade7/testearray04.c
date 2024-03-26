#include <stdio.h>

int main(){
    int dia, anos, mesIndice;
    char meses[12][30] = {{"janeiro"}, {"fevereiro"}};
    scanf("%d/%d/%d", &dia, &mesIndice, &anos);
    printf("%d de %s de %d", dia, meses[mesIndice-1], anos);
    return 0;
}