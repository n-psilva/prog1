#include <stdio.h>

int main()
{
	float nota,media,tot;
	int i;
	tot=0;
	
	for(i=1;i<=4;i++)
	{
		printf("Informe a nota:");
		scanf("%f", &nota);
		tot=tot+nota;
	}
    media=tot/4;
    
    if(media >=8.1 && media<=10.0)
    {
    	printf("A media e : %f e seu conceito e: A\n",media);
	}
	if(media >=7.1 && media<=8.0)
    {
    	printf("A media e : %f e seu conceito e: B\n",media);
	}
	if(media >=6.1 && media<=7.0)
    {
    	printf("A media e : %f e seu conceito e: C\n",media);
	}
	if(media >=5.1 && media<=6.0)
    {
    	printf("A media e : %f e seu conceito e: D\n",media);
	}
	if(media >=0.0 && media<=5.0)
    {
    	printf("A media e : %f e seu conceito e: E\n",media);
	}
	
	
	system("pause");
	return 0;
}
