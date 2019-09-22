#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* uniao de estruturas.
FORMA GERAL -->
union nome_union
{
    tipo1 nome1;
    tipo2 nome2;
    ...
    tipoN nomeN;
};
*/

//utilizada quando as variaveis nao sao utilizadas ao mesmo tempo.
//Economiza a memória.
union tipoU //memoria compartilhada
{
    short int x;//16 bits
    unsigned char c[2];//8 bits para cada posicao da array.
    //irá reservar apenas a memória do maior, 16 bits.
};
//na struct, ela guarda memória para todas as variáveis.

int main (void)
{
    union tipoU v;
    //Nao pode acessar os dois elementos ao mesmo tempo, MEMORIA COMPARTILHADA.
    v.x = 1545;
    printf("x = %d\n",v.x); //primeiro printa um tipo, depois outro.
    v.c[0] = 'o';
    v.c[1] = 'i';
    printf("c[0] = %c\n",v.c[0]);
    printf("c[1] = %c\n",v.c[1]);
    return 0;
}
