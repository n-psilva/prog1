#include <stdio.h>
int main()
{
    int i, num, resp; 
    int aux = 0;
  printf("**************************\n");
  printf("Trabalho 2: NUmeros primos\n");
  printf("Jonatan Pereira 0050014780\n");
  printf("Professor: Alex Salgado\n");
  printf("**************************\n\n");
  printf("Ola meu nome e Jontan Pereira e vou calcular numeros primos!\n\n\n");
  do 
  {
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
  } while (num <= 0);
  
  for (i = 1; i <= num; i++) 
  {
    if (num % i == 0) 
    { 
     aux++;
    }
  }
    
  if (aux == 2)
   {
           printf("O numero %d e primo!\n", num);
   }
  else
  {
    printf("O numero %d nao e primo!\n", num);
  }
    
    system("pause");
    return 0;
}
