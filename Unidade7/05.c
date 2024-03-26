#include <stdio.h>

int main() {
  printf("Digite um caracter:\n");
  char ch = getchar();
  if ((ch >= 'a') && (ch <= 'z')) {
    printf("%c é um é uma letra minúscula de %c", ch - 32, ch);
  } else {
    printf("O caracter %c não é uma letra minúscula", ch);
  }
  return 0;
}