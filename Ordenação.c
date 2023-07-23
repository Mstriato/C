#include <stdio.h> 
#include <conio.h>

int main () { 
    int vet[4]; 
    int i, j, aux;
    //declarando as variaveis

    for (i = 0; i <= 3; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }  
    for (i = 0; i <= 2; i++)
    {
        for (j = (i+1); j <= 3; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            
        }      
    }
     for (i = 0; i <=3; i++)
        {
            printf("%d",vet[i]);
        }
    getch(); 
    return 0;
}