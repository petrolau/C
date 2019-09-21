#include <stdio.h> //scanf printf

/*
Structs --> variavel "especial" que contem diversas outras variaveis.

Variaveis internas contidas pela struct sao denominadas MEMBROS
da struct.

Equivalente aos registros.

SINTAXE -->
struct <identificador>
{
    <listagem dos tipos e membros>;
};
struct<identificador><variavel>;
*/

int main(void)
{
//definindo a struct
struct ficha_aluno //nome da struct --> tipo de dado.
{
    //componentes da struct
    int matricula;
    char nome[40];
    float nota;
};

struct ficha_aluno aluno;

printf("\n ---------Cadastro de Aluno ---------\n\n\n");

printf("Nome do aluno...:");
fgets(aluno.nome,40,stdin); 

printf("Digite a matrícula...:");
scanf("%d",&aluno.matricula);

printf("Digite a nota...: ");
scanf("%f",&aluno.nota);

printf("\nNome...= %s",aluno.nome);
printf("Matrícula... = %d\n",aluno.matricula);
printf("Nota.. = %f\n",aluno.nota);

}
