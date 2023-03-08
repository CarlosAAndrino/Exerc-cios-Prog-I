#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0, aux=0;
    int *ponteiro;

    scanf("%d",&x);
    scanf("%d",&y);

    ponteiro = &x;
    aux = *ponteiro;
    x = y;
    y = aux;

    printf("\n%d\n",x);
    printf("%d\n",y);

    return 0;
}
