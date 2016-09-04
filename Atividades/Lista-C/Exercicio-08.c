#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int n,notas100,notas50,notas20,notas10,notas5,notas2,notas1;
    scanf("%d",&n);
    notas100=n/100;
    notas50=(n%100)/50;
    notas20=((n%100)%50)/20;
    notas10=(((n%100)%50)%20)/10;
    notas5=((((n%100)%50)%20)%10)/5;
    notas2=(((((n%100)%50)%20)%10)%5)/2;
    notas1=((((((n%100)%50)%20)%10)%5)%2)/1;
    printf("100:%d 50:%d 20:%d 10:%d 5:%d 2:%d 1:%d", notas100,notas50,notas20,notas10,notas5,notas2,notas1);

}
