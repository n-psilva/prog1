#include <stdio.h>
/* calcular 2 notas ao invés de apenas 1 por aluno.
ler av1 e av2 de 5 alunos, e imprimir um relatório com:
    - número do aluno, media e resultado final.
*/
int main()
{
    float nota[5][2]; // coluna0: av1 coluna 1: av2
    float media;
    int i;
    //ler av1 e av2 de 5 alunos
    for(i=0; i<5;i++)
    {
       printf("Entre com a av1 do aluno %d:", i+1);
       scanf("%f", &nota[i][0]);
       
       printf("Entre com a av2 do aluno %d:", i+1);
       scanf("%f", &nota[i][1]);
    }
    
    //imprimir relatorio
    // - número, media e resultado final.
    printf("\nRelatorio de Av1 e Av2");
    printf("\n----------------------");
    printf("\nAluno\tMedia\tResultado");
    
    for(i=0;i<5;i++)
    {
       media= (nota[i][0] + nota[i][1]) /2;
       printf("\n%d\t%2.f\t", i+1, media);
       if(media>=6)
       {
          printf("Passou");
       }
       else
       {
          printf("Av3");
       }
    }
    printf("\n\n\n");
    
    
    system("pause");
    return 0;
    
}
    
       
