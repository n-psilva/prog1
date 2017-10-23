#include <stdio.h>   // biblioteca pardão de i/o
#include <string.h> // biblioteca de manipulação de string 
int main()
{
    char nome[20];
    int i,tam;
    
    printf("\nEntre com um nome:");
    scanf("%s", nome);
    
    tam= strlen(nome); //retorna o numero de caracteres da string
    
    printf("\nO nome na ordem reversa:");
    
    for(i=tam -1; i>=0; i--)// se coloca -1 para ficar no numero correto de caracteres da string.
    {
               printf("%c", nome[i]);
    }
    
    printf("\n\n");
    
    system("pause");
    return 0;
    
}
    
    
