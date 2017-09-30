#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Entre com um numero impar:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=i;j<=n;j++)
        {
           printf("%d",j);
        }
        
        if(n==9||n==8||n==7||n==6)
           {
              n=n-1;
           }
        printf("\n");
        printf(" ");
    }
    system("pause");
    return 0;
}
