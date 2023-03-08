#include <stdio.h>
#include <stdlib.h>

struct cliente{
int codigo;
char nome[1000];
int dia_nascimento;
int mes_nascimento;
int ano_nascimento;
};




int main()
{
    struct cliente cl;
    printf("Informe o Codigo:\n");
    scanf("%d",&cl.codigo);
    printf("Informe o Nome:\n");
    scanf("%s",&cl.nome);
    printf("Informe o dia do Nascimento:\n");
    scanf("%d",&cl.dia_nascimento);
    printf("Informe o mes do Nascimento:\n");
    scanf("%d",&cl.mes_nascimento);
    printf("Informe o ano do Nascimento:\n\n\n");
    scanf("%d",&cl.ano_nascimento);



    printf("Cliente:%s \nCodigo:%d \nNascimento:%d/%d/%d",cl.nome,cl.codigo,cl.dia_nascimento,cl.mes_nascimento,cl.ano_nascimento);
}
