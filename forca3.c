#include <stdio.h>
#include <string.h>
int main()

{
	char forca[10] = "agua";
	char letra[10];
	int i,j,tam;
	
	printf("..");
	
	tam = strlen(forca);
	
	for(i=0;i<=6;i++)
	{
		printf("\nInforme a letra: ");
		scanf("%c", letra[i]);
		
		for(j=0; j<tam ;j++)
		{
			if(letra[i] == forca[j])
			{
				printf("\n %c ", letra[i]);
			}
			else
			{
				printf("_ ");
			}
		}
		
	}
	
	
	system("pause");
	return 0;
}
