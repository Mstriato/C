#include <stdio.h>
#include <conio.h>

int main (){ 
    int quart[4][4]; 
    int i, j, esc; 

    for (i = 0; i < 4; i++)
    {
        printf("Insira o valor da linha %i \n", ++i);
        --i;
        for (j = 0; j < 4; j++)
        {
            printf(" Coluna %i: ", ++j);
            --j;
            scanf("%d", &quart[i][j]);
        }
        
    }
    printf("\n Escolha o deseja ver: \n 1 - Matriz completa \n 2 - Diagonal Principal \n 3 - Triangulo Superior \n 4 - Triangulo Inferior \n");
    scanf(" %i", &esc);

    switch (esc)
    {
    case 1: 
        for (i = 0; i < 4; i++)
        { 
            printf("\n ");
            for (j = 0; j < 4; j++)
            {
                printf(" %i", quart[i][j]);
            }
            
        }
        break;
    
    case 2: 
        for (i = 0; i < 4; i++)
        {
            printf("\n");
            for (j = 0; j < 4; j++)
            {
                if (i == j)
                {
                   printf(" %i ", quart[i][j]);
                }
                else { 
                    printf("   ");
                }
                
            }
            
        }
        break;

    case 3: 
        for (i = 0; i < 4; i++)
        {
            printf("\n ");
            for (j = 0; j < 4; j++)
            {
                if (j > i)
                {
                    printf(" %i ", quart[i][j]);
                }
                else { 
                    printf("   ");
                }
                
            }
            
        }
        
        break;

    case 4: 
        for (i = 0; i < 4; i++)
        {
            printf("\n");
            for (j = 0; j < 4; j++)
            {
                if (j < i)
                {
                    printf(" %i ", quart[i][j]);
                }
                else { 
                    printf("   ");
                }
                
            }
            
        }
        
        break;

    default:
        break;
    }
    

    getch();
    return 0;
}