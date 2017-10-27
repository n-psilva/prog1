#include <stdio.h>
int main()
{
    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
    int i,j;
    // inserindo elementos em uma matriz
    for(i=0;i<3;i++)
    {
              for(j=0;j<3;j++)
              {
                      printf("Entre com o elemento da MatrizA %d-%d :",i,j);
                      scanf("%d",&matA[i][j]);
              }
    }
    //exibir os elementos da matriz A
    printf("Elementos da MatrizA:\n");
    
    for(i=0;i<3;i++)
    {
              printf("| ");
              
              for(j=0;j<3;j++)
              {
                      printf("%d",matA[i][j]);
              }
              printf(" |");
              printf("\n");
    }
    //exibir  diagonal principal
    printf("A diagonal principal da MatrizA eh:\n");
    
    for(i=0;i<3;i++)
    {
           printf("%d", matA[i][i]);
    }
    printf("\n");
    // exibir diagonal secundária .. ver outra forma de fazer
    printf("A diagonal secundária da MatrizA eh:\n");
    j=2;
    for(i=0;i<3;i++)
    {
           printf("%d", matA[i][j]);
           j--;
    }
    printf("\n");
    //entrando com os elementos da matriz b
    for(i=0;i<3;i++)
    {
              for(j=0;j<3;j++)
              {
                      printf("Entre com o elemento da MatrizB %d-%d :",i,j);
                      scanf("%d",&matB[i][j]);
              }
    }
    printf("\n");
    //exibindo os elementos da matriz b
    printf("Elementos da MatrizB:\n");
    
    for(i=0;i<3;i++)
    {
              printf("| ");
              
              for(j=0;j<3;j++)
              {
                      printf("%d",matB[i][j]);
              }
              printf(" |");
              printf("\n");
    }
    
    printf("\n");
    // soma das matrizes A e B
    for(i=0;i<3;i++)
    {
              for(j=0;j<3;j++)
              {
                      matC[i][j] = matA[i][j] + matB[i][j];
              }
    }
    
    printf("\n");
    //exibir a soma das matrizes
    printf("Soma das Matrizes A e B:\n");
    
    for(i=0;i<3;i++)
    {
              printf("| ");
              
              for(j=0;j<3;j++)
              {
                      printf("%d",matC[i][j]);
              }
              printf(" |");
              printf("\n");
    }
    printf("\n");
    
    
    
    system("pause");
    return 0;
}
