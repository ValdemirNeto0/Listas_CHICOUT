#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int  verifica(char x[4], char y[4])
{
    for (int i = 0; i <= 3; i++)
    {
        int d = 3;
        if (x[i] != y[d - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char x[4];
    char y[4];

    printf("Informe a string: ");
    gets(x);

    printf("Informe a string: ");
    gets(y);

    if (verifica(x, y))
        printf("%s é da forma contraria de %s\n", x, y);
    else
        printf("%s não é da forma contraria de %s\n", x, y);
    return 0;
}