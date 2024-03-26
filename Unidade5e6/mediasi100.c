#include <stdio.h>
int main(){
    float p1, p2, t, media;
    //scanf("Digite suas três notas: %f\n%f\n%f\n", &p1, &p2, &t);
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &t);
    media = (p1 + p2 + t)/3;
    printf("A media eh %.2f", media);
    return 0;
}