#include <stdio.h> //scanf printf

/* Ponteiro para struct --> para acessar os dados, utilize .
*/

typedef struct //encurtar o comando na declaracao.
{
    int matricula;
    float nota;
}tAluno;

int main(void)
{
    //a1 e uma struct do tipo tAluno
    tAluno a1;
    
    //*ptrAluno eh um ponteiro do tipo tALuno que recebe o endereco de a1.
    tAluno *ptrAluno = &a1;

    //atribuindo valores para os membros da struct a1
    a1.matricula = 555;
    a1.nota = 8.0;

    //exibindo dados usando a struct diretamente
    printf("Matricula...: %d Nota...: %.2f\n",a1.matricula,a1.nota);

    //podemos atribuir ou acessar um valor usando o ponteiro (*ptraluno)
    (*ptrAluno).nota = 8.5;

    //exibindo dados usando um ponteiro para struct
    printf("\n Matricula...: %d Nota...: %.2f\n",(*ptrAluno).matricula,(*ptrAluno).nota);

    //ptrAluno -> substitui a notacao (*ptrAluno). de forma mais intuitiva
    ptrAluno -> nota = 9.0;

    //portando (*ptrAluno).nota eh o mesmo que usar ptrAluno -> nota
    printf("\nMatricula...: %d Nota...: %.2f \n",ptrAluno ->matricula,ptrAluno -> nota);

    return 0;
}
