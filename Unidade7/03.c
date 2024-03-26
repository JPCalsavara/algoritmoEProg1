#include <stdio.h>

int main(){
    //Declaração das variáveis bases de cada marcação de tempo
    int dia, mes, ano;
    //Pegar dados
    printf("Digite na seguinte formatacao: dd/mm/aaaa:\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    //Formatação básica das datas
    if (1 <= dia <= 31 );
    else
    printf("Digite o dia certo!!!");
    if (1 <= mes <= 12);
    else
    printf("Digite o mes certo!!!");
// Formula de transformação de mês por número em extenso por if-else em anilhamento
    if (mes = 01)
         printf("%d de janeiro de %d", dia, ano);
    else
        if (mes = 02)
            printf("%d de fevereiro de %d", dia, ano);
         else
            if (mes = 03)
                printf("%d de marco de %d", dia, ano);
            else
                if (mes = 04)
                    printf("%d de abril de %d", dia, ano);
                 else
                    if (mes = 05) 
                        printf("%d de maio de %d", dia, ano);
                    else
                         if (mes = 06)
                             printf("%d de junho de %d", dia, ano);
                        else
                            if (mes = 07)
                                printf("%d de julho de %d", dia, ano);
                                //problema em fazer 0n em decimal
                             /*else
                                if (mes = 08)
                                     printf("%d de agosto de %d", dia, ano);
                                else
                                    if (mes = 09)
                                         printf("%d de setembro de %d", dia, ano);
                                    else*/
                                        if (mes = 10)
                                            printf("%d de outubro de %d", dia, ano);
                                         else
                                            if (mes = 11)
                                                printf("%d de novembro de %d", dia, ano);
                                            else
                                                if (mes = 12)
                                                    printf("%d de dezembro de %d", dia, ano);
    return 0;
}