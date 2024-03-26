#include <stdio.h>

int main(void) {
  float n1, n2, n3, media, exame, mediafinal;
  printf("Digite as tres notas:\n");
  scanf("%f\n", &n1);
  scanf("%f\n", &n2);
  scanf("%f\n", &n3);
  media = (n1 + n2 + n3) / 3.0;
  if (media >= 6.0)
    printf("Aprovado");
  else if (media < 2.0)
    printf("Reprovado");
  else {
    printf("Digite a nota do exame:\n");
    scanf("%f", &exame);
    mediafinal = (media + exame) / 2.0;
  }
  if (mediafinal >= 5.0)
    printf("Aprovado");
  else
    printf("Reprovado");
  return 0;
}