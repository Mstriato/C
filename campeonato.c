#include <stdio.h>
#include <conio.h> 

int main () { 
    char nomes[3][15];
    int i, j;
    //declarando variaveis
    for (i = 0; i <= 2; i++)
    {
        printf("Digite o nome do time: ");
        scanf("%s", nomes[i]);
        
    }
        for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (nomes[i] != nomes[j])
            {
                printf("\n ~~~~~~~~");
                printf("\n %s vs %s ", nomes[i], nomes[j]);
                printf("\n ~~~~~~~~");
            }
            
        }
        
        
    }
    
    
    getch ();
    return 0;
}