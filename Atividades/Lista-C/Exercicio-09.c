#include <stdio.h>
#include <stdlib.h>

int main(){

     int Numero;
     int Lista[32];
     int i;
     int j;
     int Posicao;

     printf("Digite o numero na forma decimal: ");
     scanf("%d",&Numero);

     Posicao = 0;

     while(Numero > 0){
     Lista[Posicao] =Numero%2;
     Posicao++;
     Numero = Numero/2;
     }

     printf("Numero na forma binaria: ");

     for(j = Posicao - 1;j >= 0; j--){
     printf("%d", Lista[j]);
     }

     printf("\n");
}
