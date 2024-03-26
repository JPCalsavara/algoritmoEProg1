#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    float celsius, fahr;
    printf("Digite o valor de Celsius:\n");
    scanf("%f", &celsius);
    // atribuição de varíavel depois de atribuição de valor pelo scanf
    fahr = (celsius * 1.8) + 32.0;
    printf("O valor %.2f em Celsius e equivalente a %.2f em Fahrenheit", celsius, fahr);
    return 0;
}