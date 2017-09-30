#include <stdio.h>
int main()
{
    int i, linhas;
    linhas=5;
    
    for(i=1; i<=linhas ;i++)
    {
       if( (i==1) || (i==linhas) )
       {
           printf("****");
       }
       else
       {
           printf("\n*  *");
       }
       printf("\n");
    }
    system("pause");
    return 0;
}
      
