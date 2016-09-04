#include <stdio.h>
#include <stdlib.h>
int main( )
{
  int total,w,x,y,z=1;
  printf("Digite um número ímpar:\n");
  scanf("%d",&total);
  for (x=0;x<=(total/2);x++) {
    for (w=0;w<x;w++) {
      printf(" ");
    }
    for (y=z+x;y<=total-x;y++) {
      printf("%d ",y);
    }
    printf("\n");
  }
  return 0;
}
