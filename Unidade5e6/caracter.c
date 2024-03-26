#include <stdio.h>

int main(){
    int num;
    printf("Digite um caracter:\n");
    num = getchar();
    // scanf("%d\n", &num); não funciona
    printf("%d", num);
    num+=1;
    printf("Seu posterior %c", num);
    return 0;
}