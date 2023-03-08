#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * arquivo;
    int x;
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    arquivo = fopen("alfabeto.txt","w");
    for(x=0;x<26;x++){
        fputc(c[x],arquivo);
    }
    fclose(arquivo);

    char letra;
    int casa;
    printf("Qual a casa que deseja ler?\n");
    scanf("%d",&casa);
    arquivo = fopen("alfabeto.txt","r");
    for(x=0;x<26;x++){
        fscanf(arquivo,"%c",&letra);
        if(x == casa-1){
            printf("A letra da casa %d e: %c",casa,letra);
            break;
        }
    }
    fclose(arquivo);

    return 0;
}
