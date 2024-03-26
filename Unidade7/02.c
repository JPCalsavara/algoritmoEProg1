#include <stdio.h>

int main(){
    //Declaração dos digitos escolhidos para ver se é par ou ímpar
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, par, impar;
    // tirar lixo da memória é necessário declarar como 0 as variáveis par e impar
    impar = 0;
    par = 0;
printf("Digite 10 numeros:\n");
scanf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
//Forma de adicionar comparar o número com a divisão do resto e adicionar a contagem de par ou impar para ser mostrado no final do programa
if (num1 % 2 == 0)
    par+=1;
    else
    impar+=1;
if (num2 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num3 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num4 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num5 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num6 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num7 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num8 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num9 % 2 == 0)
     par+=1;
    else
    impar+=1;
if (num10 % 2 == 0)
     par+=1;
    else
    impar+=1;
printf("Dos numeros apresentado %d sao pares e %d sao impares", par, impar);
return 0;
}
