#include <stdio.h>

int main()
{
    typedef struct corpo
    {
        float altura;
        float peso;
        char nome[31];
    } c;
    c pessoa1;
    scanf("%f", &pessoa1.altura);
    scanf("%f", &pessoa1.peso);
    getchar();
    fgets(pessoa1.nome, 31, stdin);
    float imc = pessoa1.peso / (pessoa1.altura * pessoa1.altura);
    printf("%.3f\n", imc);

    return 0;
}