#include<stdio.h>
#include<locale.h>
#define l 3
#define c 5
void gabarito (char gab[c])
{
    printf("Criando o gabrito: \n\n");
    int i, j;
    for (i=0;i<5;i++)
    {
        printf("Questão %d: \nMarque a, b, c, d ou e = ", i+1);
        scanf("%c", &gab[i]);
        getchar();
    }
}
void ler (char m[l][c], char gab[c])
{
    int i, j, acertos[3];
    for (i=0;i<l;i++)
    {
        acertos[i] = 0;
        printf("Informe as respostas do aluno %d \n", i);
        for (j=0;j<c;j++)
        {
            printf("Questão %d: \n", j+1);
            scanf("%c",&m[i][j]);
            getchar();
            if (m[i][j] == gab[i])
            {
                acertos[i] = acertos[i] + 1;
            }
        }
    }
    printf("\n\nINFORMANDO O RESULTADO !\n\n");
    for (i=0;i<l;i++)
    {
        printf("O aluno %d obteve %d acertos \n", i, acertos[i]);
    }
    getchar();
}
int main ()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int acertos[3];
    char gab[c], m[l][c];
    gabarito(gab);
    ler(m, gab);
    return 0;
}