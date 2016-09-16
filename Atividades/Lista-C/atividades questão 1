#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 10;
int main(){

    srand( (unsigned)time(NULL) );
    int i ,a;
    int  vetor[10],x;
    x  = 0 + (rand() % 100 );
    printf("O vetor aleatorio gerado foi esse : \n");
    for(i = 0;i<10;i++){
        vetor[i] = i + x;
    }
    for(i=0;i<10;i++){
        printf("%d\n",vetor[i]);
    }
    printf("Digite um numero a ser procurado no vetor\n");
    scanf("%d",&a);
    for(i=0;i<10;i++){
        if(vetor[i]==a){
            printf("%d numero encontrado na posicao\n\n",i);
        }else{
            printf("Numero não encontrado no vetor\n");
            break;
        }


    }




    return 0;
}
