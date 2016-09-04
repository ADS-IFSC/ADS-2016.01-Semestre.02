int main() {
  int n;
  int f1 = 1;
  int f2 = 1;
  int aux;
  int i;
  printf("Informe um numero :\n");
  scanf("%d", &n);
  for (i = 0 ; i < n ; i++ ){
    printf("%d,", f1);
    aux = f1+f2;
    f1 = f2;
    f2 = aux;
  }
  return 0;
}
