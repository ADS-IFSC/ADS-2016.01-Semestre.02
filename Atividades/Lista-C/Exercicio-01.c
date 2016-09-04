#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,aux,resto;

    printf("\n Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\n Digite o segundo numero: ");
    scanf("%d",&num2);

    if (num2>num1){
        aux=num1;
        num1=num2;
        num2=aux;
    }

    resto = 1;
    while (resto!=0){
        resto=num1%num2;
        num1=num2;
        num2=resto;
    }

    printf("\n %d", num1);

    return 0;
}
