#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>

int main (){ 
    int quart[4][4];
    int i, j, sDP = 0, PV2L = 1, maior = 0;
        for (i = 0; i < 4; i++)
    {
    printf("Digite o valor da %i linha \n", ++i);
    --i;

        for (j = 0; j < 4; j++)
        {
            printf(" Coluna %i: ", ++j);
            --j;
            scanf("%d", &quart[i][j]);
            if (i == j)
            {
                sDP += quart[i][j];
            }
            if (i == 1)
            {
                PV2L *= quart[i][j];
            } 
        }
        if (quart[i][2]> maior)
            {
                maior = quart[i][2];
            }
        
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("    %i ", quart[i][j]);
        }
        
    }
    
    printf("\n~ A soma dos valores da diagnonal principal eh %i", sDP);
    printf("\n~ A soma dos produtos da segunda linha eh %i", PV2L);
    printf("\n~ O maior valor da coluna 3 eh %i", maior);


    getch();
    return 0;
}