#include <stdio.h>
#include <stdlib.h>

typedef struct jogo{
int id;
char nome[30];
char tipo[30];
char plataforma[30];
} Jogo;

int cadastrar(Jogo *j){
FILE *arquivo;
arquivo = fopen("Jogos.dado","ab");
if(arquivo == NULL){
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
}
fwrite(j,sizeof(Jogo),1,arquivo);
fclose(arquivo);
if(fwrite != 0){
    return 1;
}
else{
    return 0;
}
}

void listar (){
FILE *arquivo;
arquivo = fopen("Jogos.dado","rb");
if(arquivo == NULL){
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
}
Jogo aux;

while (fread(&aux,sizeof(Jogo),1,arquivo)){
    printf("\nID: %d\nNOME: %s\nTIPO: %s\nPLATAFORMA: %s\n\n",aux.id,aux.nome,aux.tipo,aux.plataforma);
}
fclose(arquivo);

}

void buscar(){
FILE *arquivo;
arquivo = fopen("Jogos.dado","rb");
if(arquivo == NULL){
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
}
Jogo aux;
int id_de_busca;
printf("Digite o ID desejado: ");
scanf("%d",&id_de_busca);

while (fread(&aux,sizeof(Jogo),1,arquivo)){
    if(id_de_busca == aux.id){
        printf("\nID: %d\nNOME: %s\nTIPO: %s\nPLATAFORMA: %s\n\n",aux.id,aux.nome,aux.tipo,aux.plataforma);
    }
    else{
        printf("Arquivo nao encontrado.\n");
        break;
    }
}
fclose(arquivo);

}



int main()
{
    int num;
    Jogo aux;
    do {
        printf("1-Cadastrar\n2-Listar\n3-Buscar\n4-Finalizar\n");
        scanf("%d",&num);
        switch(num){
        case 1:
            printf("Digite o ID: ");
            scanf("%d",&aux.id);
            getchar();
            fgets(aux.nome,30,stdin);
            aux.nome[strlen(aux.nome)-1] = 0;
            fgets(aux.tipo,30,stdin);
            aux.tipo[strlen(aux.tipo)-1] = 0;
            fgets(aux.plataforma,30,stdin);
            aux.plataforma[strlen(aux.plataforma)-1] = 0;
            if(cadastrar(&aux)){
                printf("Cadastrado com sucesso.\n");
            }
            else{
                printf("Falha ao cadastrar.\n");
            }
            break;
        case 2:
            listar(aux);
            break;
        case 3:
            buscar(aux);
            break;
        case 4:
            break;
        }
    }
    while(num==4);
    return 0;
}
