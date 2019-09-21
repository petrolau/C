#include <stdio.h> //scanf printf

/* Usando typedef para redefinir structs:

--> a fim de tornar os nomes mais curtos, representando uma estru-
tura apenas seu sinonimo.
*/

//redefinindo os tipos basicos float e int.
typedef float nota;
typedef int inteiro;

struct tAluno
{
    inteiro matricula;
    nota prova1;//nota eh float
    nota prova2;
};

//redefinindo a struct para encurtar o comando na declaracao.
typedef struct tAluno tAluno;

int main(void)
{
     /* delcarando a variavel do tipo tAluno
     com a redefinicao nao e preciso escrever
     struct tAluno
     */

    tAluno aluno;//o aluno eh um tipo da struct tAluno
    nota media = 0;//para conseguir fazer os calculos mais abaixo
    printf("Informe o numero da matricula...: ");
    scanf("%d", &aluno.matricula);

    printf("Informe a nota da primeira prova...: ");
    scanf("%f",&aluno.prova1);

    printf("Informe a nota da segunda prova...: ");
    scanf("%f",&aluno.prova2);

    media = (aluno.prova1 + aluno.prova2)/2;
    
    printf("\nMatricula...: %d\n", aluno.matricula);
    printf("Media...: %.2f\n", media);

    return 0;
}
