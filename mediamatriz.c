#include <stdio.h>
int main()
{
    char nome[5][20];
    float nota[5][2];
    int i;
    float media;
    
    for(i=0;i<5;i++)
    {
         printf("\nNome do aluno %d: ",i+1);
         scanf("%s", nome[i]);
         printf("\nNota Av1 aluno %d: ", i+1);
         scanf("%f", &nota[i][0]);
         printf("\nNota Av2 aluno %d: ", i+1);
         scanf("%f", &nota[i][1]);
    }
    printf("\n\nResultado Final");
    for(i=0;i<5;i++)
    {    
         media = (nota[i][0] + nota[i][1])/2;
         
         if(media>=6)
         {
              printf("\n%s\t aprovado", nome[i]);
         }
         
         else
         {
              printf("\n%s\t vai para Av3\n", nome[i]);
         }
    }
    
    system("pause");
    return 0;
    
}
         
