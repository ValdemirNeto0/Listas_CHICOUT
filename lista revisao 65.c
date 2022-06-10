#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user
{
    char login[20];
    char pass[20];
};
typedef struct user User;
int main()
{
    User v[10], u;
    int igual = -2, igualp = -2;
    for (int i = 0; i < 10; i++)
    {
        int j = 0;
        printf("Login: ");
        fflush(stdin);
        gets(v[i].login);
        if (i > 0)
        {
            do
            {
                for (j = 0; j < i; j++)
                {
                    igual = strcmp(v[j].login, v[i].login);
                    if (igual == 0)
                    {
                        printf("Usuario ja cadastrado!\n");
                        printf("Login: ");
                        fflush(stdin);
                        gets(v[i].login);
                        break;
                    }
                }

            } while (igual == 0);
        }

        printf("senha: ");
        fflush(stdin);
        gets(v[i].pass);
    }
    printf("\t-TELA DE LOGIN-\n\n");
    printf("Login\n");
    fflush(stdin);
    gets(u.login);
    printf("Senha\n");
    fflush(stdin);
    gets(u.pass);

    for (int i = 0; i < 10; i++)
    {
        igual = strcmp(u.login, v[i].login);
        if (igual == 0)
        {
            do
            {
                igualp = strcmp(u.pass, v[i].pass);
                if (igualp != 0)
                {
                    printf("senha incorreta!\n");
                    printf("Senha\n");
                    fflush(stdin);
                    gets(u.pass);
                }
                else
                {
                    printf("login efetuado!\n");
                    return 0;
                }

            } while (igualp != 0);
        }
    }
    if (igual != 0)
    {
        printf("usuario nao cadastrado!");
    }

    return 0;
}