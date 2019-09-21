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

printf("\nNome do aluno...: \n");
fgets(aluno.nome,40,stdin); 

printf("\nDigite a matrícula do(a) aluno(a) %s\n",aluno.nome);
scanf("%d",&aluno.matricula);

printf("\nDigite a nota do(a) aluno(a) %s",aluno.nome);
scanf("%f",&aluno.nota);

printf("\nNome do(a) aluno(a) eh = %s",aluno.nome);
printf("\nMatrícula do(a) aluno(a) %s eh = %d",aluno.nome,aluno.matricula);
printf("\nNota do(a) aluno(a) %s eh = %f",aluno.nome,aluno.nota);

}
