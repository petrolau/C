#include <stdio.h> //scanf printf

/* typedef --> renomeia um tipo de dados.

sintaxe:
typedef <nome do tipo de dado><novo nome>;

nao cria um novo tipo, apenas denomina um tipo existente de outra
forma.
*/

int main(void)
{
    //redefinindo float como nota:
    typedef float nota;

    //declarando as variaveis usando o tipo de dados renomeado:
    nota prova1 = 0, prova2 = 0, media = 0;

    printf("Informe  a nota da primeira prova: ");
    scanf("%f",&prova1);

    printf("Infome a nota da segunda prova: ");
    scanf("%f",&prova2);

    media = (prova1+prova2)/2;

    printf("Media...:%.2f\n",media);
    return 0;
}
