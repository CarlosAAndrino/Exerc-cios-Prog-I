#include <stdio.h>
#include <stdlib.h>

void cripografia (char *str, char a, char b){
    int i=0;
    for(i=0; i<50; i++){
        if(str[i] == a){
            str[i] = b;
        }
    }
}





int main()
{
    char frase[50]={0};
    char letra=0;
    char troca=0;
    int *ponteiro;
    int i;

    fgets(frase,50,stdin);
    scanf("%c %c",&letra,&troca);

    cripografia(frase,letra,troca);

    puts(frase);
    return 0;
}
