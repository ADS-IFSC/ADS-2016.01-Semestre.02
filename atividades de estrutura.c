#include <stdio.h>
#include <stdlib.h>

int main(void){
    char n,m;
    int i,p,x;
    struct Bandas{
      char nome[15];
      char musica[15];
      int integrantes;
      int posicao;
};

    char nome2[15],musica2[15];
    printf("Digite o nome da banda\n");
    scanf("%s",&nome2);
    printf("Digite o nome da musica\n");
    scanf("%s",&musica2);
    printf("Digite o numero de integrantes da banda\n");
    scanf("%d",&i);
    printf("Digite a posição da banda no ranking de 1º ao 5º lugar\n");
    scanf("%d",&p);
    if(p<1 && p>5){
        printf("Eh so 1° ao 5° banda lixo _|_ \n");
        scanf("%d",&p);
    }
    struct Bandas banda;
        banda.nome[15] = nome2[15];
        banda.musica[15] = musica2[15];
        banda.integrantes = i;
        banda.posicao = p;

     printf("O nome da banda eh :\n");
     printf("O nome da musica eh :\n");
for(x=0;x<15;x++){
    printf("%c",banda.nome[x]);
    printf(" \n");
    printf("%c",banda.musica[x]);
    }

printf("O numero de integrantes eh %d",i);
printf("A posicao da banda eh %d",p);






    system("pause");
    return 0;
}
