#include <stdio.h>

float imc(float x, float y)
{
    return x / (y * y);
}

int main()
{
    float peso, altura, index;
    scanf("%f %f", &peso, &altura);
    index = imc(peso, altura);
    if (index < 18.5)
        printf("Abaixo do Peso");
    else if (index >= 18.5 && index <= 25.0)
        printf("Peso Normal");
    else if (index >= 25.0 && index <= 30.0)
        printf("Acima do Peso");
    else if (index > 30.0)
        printf("Obeso");
    return 0;
}