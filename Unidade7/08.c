#include <stdio.h>

int main(){
    char sinal;
    float num1, num2, resultado;
    scanf("%d %c %d", num1, sinal, num2);
    switch (sinal)
    {
    case '+':
        printf("%.3f%c%.3f=%.3f \n", num1, sinal, num2, (num1+num2));
        break;
    case '-':
        printf("%.3f%c%.3f=%.3f \n",num1, sinal, num2, (num1-num2));
        break;
    case '*':
        printf("%.3f%c%.3f=%.3f \n",num1, sinal, num2,(num1*num2));
        break;
    case '/':
        printf("%.3f%c%.3f=%.3f \n",num1, sinal, num2,(num1/num2));
        break;
    default:
        printf('Operador invalido \n');
        break;
    }
    return 0;
}