#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

//aninhamento de estruturas --> organizar os dados.
typedef struct 
{
    int numero;
}endereco;

typedef struct 
{

    char nome[50];
    int idade;
    endereco ender;//ender eh variavel do tipo endereco e esta dentro de "pessoa" 
}pessoa;



int main()
{
    pessoa p;//p eh variavel do tipo struct
    /*
    p.ender.numero=101;//dentro de p há a variavel ender, que eh do tipo struct endereco
    */
    printf("Entre o nome da pessoa: ");
    fgets(p.nome,50,stdin);

    printf("Entre a idade da pessoa: ");
    scanf("%d",&p.idade);


    printf("Entre o numero da casa: ");
    scanf(" %d",&p.ender.numero);


    printf("\n\n---------Lendo Dados---------\n\n");
    printf("NOME: %s\n",p.nome);
    printf("IDADE: %d ANOS\n",p.idade);
    printf("NUMERO DA CASA: %d\n",p.ender.numero );
}
