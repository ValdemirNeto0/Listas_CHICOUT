#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int valor = -2;
    char palavra[15], inversa[15];

    printf("\nDigite uma palavra: ");
    gets(palavra);

    strcpy(inversa, palavra);

    strrev(inversa);

    valor = strcasecmp(palavra, inversa);

    if (valor == 0)
        printf("\nA palavra %s e palindroma\n", palavra);
    else
        printf("\nA palavra %s nao e palindroma\n", palavra);

    return 0;
}