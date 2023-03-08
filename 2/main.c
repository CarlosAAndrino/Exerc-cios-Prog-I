#include <stdio.h>
#include <stdlib.h>

int soma_recursiva(int *a,int i,int tam){
    if(i==tam-1){
        return a[i];
    }
    else{
        return a[i]+soma_recursiva(a,i+1,tam);
    }


}


int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int tam=10;
    printf("%d",soma_recursiva(a,i,tam));
    return 0;
}
