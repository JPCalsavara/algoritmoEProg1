#include <stdio.h>

int main() {
  // Declaração das variáveis dos espaços de tempo
  int dia, mes, ano;
  // Solicita ao usuário que insira o dia, mês e ano
  //printf("Digite uma data no formato dd/mm/aaaa:\n ");
  // Leitura das variáveis do dia, mês e ano
  scanf("%d/%d/%d", &dia, &mes, &ano);
  // Utilização do switch para selecionar o mês em extenso com base no número do
  // mês
  switch (mes) {
  case 1:
    printf("%d de janeiro de %d\n", dia, ano);
    break;
  case 2:
    printf("%d de fevereiro de %d\n", dia, ano);
    break;
  case 3:
    printf("%d de março de %d\n", dia, ano);
    break;
  case 4:
    printf("%d de abril de %d\n", dia, ano);
    break;
  case 5:;
    printf("%d de maio de %d\n", dia, ano);
    break;
  case 6:
    printf("%d de junho de %d\n", dia, ano);
    break;
  case 7:
    printf("%d de julho de %d\n", dia, ano);
    break;
  case 8:
    printf("%d de agosto de %d\n", dia, ano);
    break;
  case 9:
    printf("%d de setembro de %d\n", dia, ano);
    break;
  case 10:
    printf("%d de outubro de %d\n", dia, ano);
    break;
  case 11:
    printf("%d de novembro de %d\n", dia, ano);
    break;
  case 12:
    printf("%d de dezembro de %d\n", dia, ano);
    break;
    default:
    printf("Mes invalido\n");
  }
  return 0;
}