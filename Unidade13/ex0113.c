#include <stdio.h>

float volume_esfera(float r)
{

    float vol, pi;
    pi = 3.14159;
    vol = (4 * pi * r * r * r);
    return vol/3;
}
int main()
{
    float r;
    scanf("%f", &r);
    printf("%.2f\n", volume_esfera(r));
    return 0;
}