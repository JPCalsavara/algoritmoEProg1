#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ch;

  printf("Please, input a single character: ");
  ch = getchar();
  putchar(ch);

  exit(EXIT_SUCCESS);
}