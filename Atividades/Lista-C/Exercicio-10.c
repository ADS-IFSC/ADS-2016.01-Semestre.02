#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,numero,mes;
  int lista[13];

  for (i=0;i<14;i++){
    lista[i]= 0;
  }

  for (i=0;i<3;i++){
  
  printf("Digite um numero: \n");
  scanf("%d", &numero);

  mes = (numero / 100);
  printf("mes digitado:%d \n",mes);


  lista[mes]++;

  }

  for (i=1;i<13;i++){
    printf("mes %d apareceu %d vezes\n",i,lista[i]);
  }


  return 0;
}
