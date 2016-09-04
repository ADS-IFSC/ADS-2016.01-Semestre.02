#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num[10],i;
  float media=0;
  for(i=0;i<10;i++)
  {
    printf("Digite um numero %d para calcular a media: ",i+1);
    scanf("\n%f",&num[i]);
    media=num[i]+media;
  }
  media=media/10;
  printf("\nos numeros maiores que a media sao: ");
  for (i=0;i<10;i++)
  {
    if (num[i]>media)
    {
      printf("%d, ",num[i]);
    }
  }
  printf("\n");
  return 0;
}
