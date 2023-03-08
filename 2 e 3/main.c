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
int procura(int *a, int tam, int indice, int num){
    if(a[indice] == num){

        return indice;
    }
    else if(a[indice] == tam){
        return -1;
    }
    else{
        return procura(a,tam,indice+1,num);
    }
}



int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int tam=10;
    int num=0;
    int indice=0;
    scanf("%d",&num);
    printf("%d\n",soma_recursiva(a,i,tam));
    printf("%d\n",procura(a,tam,indice,num));
    return 0;
}
