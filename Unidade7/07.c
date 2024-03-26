#include <stdio.h>

int main(){
    char sinal;
    float num1, num2;
    scanf("%f%c%f", &num1, &sinal, &num2);
    if (sinal == '+')
        printf("%.3f%c%.3f=%.3f\n", num1, sinal, num2, (num1+num2));
    else if (sinal == '-')
        printf("%.3f%c%.3f=%.3f\n",num1, sinal, num2, (num1-num2));
    else if (sinal == '*')
        printf("%.3f%c%.3f=%.3f\n",num1, sinal, num2,(num1*num2));
    else if (sinal == '/')
        printf("%.3f%c%.3f=%.3f\n",num1, sinal, num2,(num1/num2));
    else 
        printf("Operador invalido\n");
    return 0;
}