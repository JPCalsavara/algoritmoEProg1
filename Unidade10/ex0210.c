#include <stdio.h>
#define NMAX 20
int main()
{
   int m1[NMAX][NMAX], m2[NMAX][NMAX], m3[NMAX][NMAX], nlin, ncol, i, j;
   
   printf("Digite o numero de linhas e colunas:");
   scanf("%d %d", &nlin, &ncol);
   printf("Digite os numeros na primeira matriz:");
   for (; nlin > 0; nlin--)
   {
      for (; ncol > 0; ncol--)
      {
         scanf("%d", &m1[nlin][ncol]);
      }
   }

   printf("Digite o numero de linhas e colunas:");
   scanf("%d %d", &nlin, &ncol);
   printf("Digite os numeros na segunda matriz:");
   for (; nlin > 0; nlin--)
   {
      for (; ncol > 0; ncol--)
      {
         scanf("%d", &m2[nlin][ncol]);
      }
   }

   for (; nlin > 0; nlin--)
   {
      for (; ncol > 0; ncol--)
      {
         printf("%d", m1[nlin][ncol]);
      }
   }
   for (; nlin > 0; nlin--)
   {
      for (; ncol > 0; ncol--)
      {
         printf("%d", m2[nlin][ncol]);
      }
   }

   return 0;
}