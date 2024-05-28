#include <stdio.h>
#include <string.h>

int main()
{
    char word[81];
    int i;
    fgets(word, 81, stdin);
    for (i = strlen(word); i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    return 0;
}