#include <stdio.h>
int main()
{
    int ant,pos,fibo,n,i;
    ant=0;
    pos=1;
    printf("Digite um numero para a ate que termo deve ir a sequencia de Fibonacci:%d \n\n",n);
    scanf("%d",&n);
    printf("O primeiro termo e %d e o segundo %d.",ant,pos);
    for(i=3;i<=n;i++)
    {
                     fibo=ant+pos;
                     printf("%d",fibo);
                     ant=pos;
                     pos=fibo;
    }
    return 0;
    
}
                     
