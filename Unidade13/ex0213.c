#include <stdio.h>
#include <math.h>

int media_aritmetica(int x, int y)
{
    return ((x + y) / 2);
}

int media_geometrica(int x, int y)
{
    return sqrt(x * y);
}

int main()
{
    int num1, num2;
    char type_media;
    scanf("%d %d %c", &num1, &num2, &type_media);
    if (type_media == 'A')
    {
        printf("%d",media_aritmetica(num1, num2));
    }
    if (type_media == 'B')
    {
        printf("%d",media_geometrica(num1, num2));
    }
    return 0;
}