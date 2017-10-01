#include <stdio.h>

int main()
{
	int n,maior,menor,dif,i;
	maior=-1;
	menor=999999;
	
	for(i=1;i<=5;i++)
   {
	   printf("digite um numero:");
	   scanf("%d",&n);
	   
	   if(n>maior)
	   {
	   	maior=n;
	   }
	   if(n<menor)
	   {
	   	menor=n;
	   }
    }
	printf("A maior nota e: %d e a menor nota:%d\n",maior,menor);
    dif=maior-menor;
	printf("A diferenca entre eles e : %d\n", dif);
	
	system("pause");
	return 0; 
}
