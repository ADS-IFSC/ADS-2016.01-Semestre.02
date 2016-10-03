#include <stdio.h>
#include <stdlib.h>

int main(void){
    int  A11,A12,A13;
    int  A21,A22,A23;
    int  A31,A32,A33;


    printf("Digite a primeira linha da matriz: \n");
    scanf("%d %d %d",&A11,&A12,&A13);
    printf("Digite a seunda linha da matriz: \n");
    scanf("%d %d %d",&A21,&A22,&A23);
    printf("Digite a terceira linha da matriz: \n");
    scanf("%d %d %d",&A31,&A32,&A33);


    printf("A matriz que vc digitou eh a seguinte: \n");

    printf("[ %d %d %d ]\n",A11,A12,A13);
    printf("[ %d %d %d ]\n",A21,A22,A23);
    printf("[ %d %d %d ]\n",A31,A32,A33);


    printf("A matriz Transposta dessa matriz eh a seguinte: \n");


    printf("[ %d %d %d ]\n",A11,A21,A31);
    printf("[ %d %d %d ]\n",A12,A22,A32);
    printf("[ %d %d %d ]\n",A13,A23,A33);

    system("pause");
    return 0;
}
