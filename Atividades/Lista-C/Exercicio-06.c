#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  printf("Digite os tres lados de um triangulo\n");
  int a,b,c,h,t,i,x;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b && a>c){
    h=a;
    t=b;
    i=c;
  }
  else if(b>a && b>c){
    h=b;
    t=a;
    i=c;
  }
  else if(c>a && c>b){
    h=c;
    t=a;
    i=b;
  }
  x=pow(t,2)+pow(i,2);
  h=pow(h,2);
  if(h==x){
    printf("Os dados Formam um Triangulo Retangulo\n");
  }
  else{
    printf("Os dados Nao Formam um Triangulo Retangulo\n");
  }
  return 0;
}
