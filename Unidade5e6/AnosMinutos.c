#include <stdio.h>
int main(){
    int anos, minutos;
    printf("Digite sua idade:\n");
    scanf("%d", &anos);
    minutos = anos*365*24*60;
    printf("Sua idade em minutos eh %d", minutos);
    return 0;
}