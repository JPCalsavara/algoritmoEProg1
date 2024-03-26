#include <stdio.h>
int main(){
    int idade;
    float altura;
    char sexo;
    printf("Entre com dados (idade, altura, sexo):\n");
    scanf("%d %f %c",&idade, &altura, &sexo);
    printf("A pessoa tem %d anos, %.2f m e %c", idade, altura, sexo);
    return 0;
}