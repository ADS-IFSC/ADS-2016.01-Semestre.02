#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, num3, num4, aux;

    printf("Primeiro Numero: ");
    scanf ("%d", &num1);
    printf ("\nSegundo Numero: ");
    scanf ("%d", &num2);
    printf ("\nTerceiro Numero: ");
    scanf ("%d", &num3);
    printf ("\nQuarto Numero: ");
    scanf ("%d", &num4);

    printf ("\n");

    if (num1>num2) {
        aux=num2;
        num2=num1;
        num1=aux;
    }

    if (num1>num3){
        aux=num3;
        num3=num1;
        num1=aux;
    }

    if (num1>num4){
        aux=num4;
        num4=num1;
        num1=aux;
    }

    if (num2>num3){
        aux=num3;
        num3=num2;
        num2=aux;
    }

    if (num2>num4){
        aux=num4;
        num4=num2;
        num2=aux;
    }

    if (num3>num4){
        aux=num4;
        num4=num3;
        num3=aux;
    }

    printf ("\n\n %d - %d - %d - %d\n\n", num1, num2, num3, num4);

return 0;

    }
