#include <stdio.h>

int main()
{
    struct tempo
    {
        int hora;
        int minutos;
        int segundos;
    };
    struct tempo entrada, saida;

    struct
        estacionamento
    {
        int placa;
        char modelo[20];
        struct tempo entrada;
        struct tempo saida;
    };
    struct estacionamento carro[5];
    int i, horas[5], minutos[5], segundos[5], inSegundos, outSegundos;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &carro[i].placa);
        scanf("%s", carro[i].modelo);
        scanf("%d %d %d", &carro[i].entrada.hora, &carro[i].entrada.minutos, &carro[i].entrada.segundos);
        scanf("%d %d %d", &carro[i].saida.hora, &carro[i].saida.minutos, &carro[i].saida.segundos);
    }

    for (i = 0; i < 5; i++)
    {
        inSegundos = (carro[i].entrada.hora * 60 * 60) + (carro[i].entrada.minutos * 60) + carro[i].entrada.segundos;
        outSegundos = (carro[i].saida.hora * 60 * 60) + (carro[i].saida.minutos * 60) + carro[i].saida.segundos;
        segundos[i] = inSegundos - outSegundos;
        minutos[i] = segundos[i] / 60;
        segundos[i] = segundos[i] % 60;
        horas[i] = minutos[i] / 60;
        minutos[i] = minutos[i] % 60;
    }

    for (i = 0; i < 5; i++)
    {
        printf("O tempo de permanecia foi de %d %d %d\n", horas[i], minutos[i], segundos[i]);
        printf("%s", carro[i].modelo);
        printf("%d", carro[i].placa);
    }
    return 0;
}