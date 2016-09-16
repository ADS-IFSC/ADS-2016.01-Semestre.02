#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vetor[18],i,x,a;
    srand( (unsigned)time(NULL) );

    for(i=0;i<15;i++){
        x  = 0 + (rand() % 9 );
        vetor[i] = (i*0) + x;


        }
        printf("O CPF aleatorio gerado eh o seguinte:\n\n");
        printf("%d%d.%d%d%d.%d%d%d/%d%d%d%d-%d%d",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],
        vetor[5],vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11],vetor[12],vetor[13],vetor[14]);


    return 0;
}
