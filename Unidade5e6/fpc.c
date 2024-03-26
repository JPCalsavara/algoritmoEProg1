#include <stdio.h>

int main(){
    float celsius, fahr;
    printf("Digite o valor de Fahrenheit:\n");
    scanf("%f", &fahr);
    celsius = (fahr - 32.0)/1.8;
    printf("O valor %.2f em Fahrenheit eh equivalente a %.2f em Celsius.", fahr, celsius);
    return 0;
}
