#include <stdio.h>

int main()
{
        int mes,
            dias=31;
        printf("Digite o mes [1-12]: ");
        scanf("%d", &mes);

        if(mes>12 || mes<1)
            printf("Mes invalido");
        else
            switch( mes )
                {                 
                    case 2:
                        dias -=2;
                    case 4: case 6: case 9: case 11:
                        dias--;
                }

        printf("O mes %d possui %d dias", mes, dias);

}