#include <stdio.h> 
#include <conio.h> 

int main (){ 
int terc[3][3];
int i, j; 
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        if (i == j)
        {
            terc[i][j] = 1;
        }
        else { 
            terc[i][j] = 0;

        }
        
    }
    
}
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf(" %i ", terc[i][j]);
    }
    printf("\n");
    
}



    getch(); 
    return 0;
}