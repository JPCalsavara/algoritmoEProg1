#include <stdio.h>
#include <math.h>

int main()
{
    struct pontos
    {
        double x;
        double y;
    } p1, p2;
    double dist, c;

    // Lendo as coordenadas do primeiro ponto
    scanf("%lf %lf", &p1.x, &p1.y);

    // Lendo as coordenadas do segundo ponto
    scanf("%lf %lf", &p2.x, &p2.y);

    c = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);

    dist = sqrt(c);
    return 0;
}