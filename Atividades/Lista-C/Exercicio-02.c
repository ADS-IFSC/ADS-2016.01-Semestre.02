#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,cont,resul;
    printf("Informe um n�mero:\n");
    scanf("%d",&n1);
    cont = n1-1;
    while (cont > 0)
    {
        if ( (n1 % cont) == 0 )
        {
            resul = resul + cont;
        }
        cont = cont-1;
    }
    if (n1 == resul)
    {
        printf("\nPerfeito");
    }
    else
    {
        printf("Nao e perfeito");
    }
    return 0;
}
