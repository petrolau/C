#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*ENUM 
Forma Geral -->
enum nome_enum {lista de identificadores};
*/

//vai dar a posicao no array do nome desejado.
enum semana
{
    Domingo,Segunda,Terca,Quarta,Quinta,Sexta,Sabado
};

int main(void)
{
    enum semana s1,s2,s3;
    s1 = Segunda; //1
    s2 = Terca; //2
    s3 = s1 + s2; //1 + 2
    printf("Domingo = %d\n",Domingo);
    printf("Segunda = %d\n",s1);
    printf("Terca = %d\n",s2);
    printf("Quarta = %d\n",s3);
    if (s3 == Quarta)
        printf("s3 eh igual a Quarta\n");
    return 0;
}
