#include <stdio.h>

int main (){
    float notas[30], media=0;
    int i;
    for(i=0;i<30;i++)
    {
        scanf("%f", &notas[i]);
    }
    for(i=0;i<30;i++)
    {
    media +=notas[i];
    }
    media /= 30;
    printf("A media de notas foi %5.2f\n", media);
    printf("Os alunos que tiveram notas maiores que a media foram:\n");
    for(i=0;i<30;i++)
        if (notas[i] > media)
        {
            printf("O aluno %d\n", i);
        }
    return 0;
}