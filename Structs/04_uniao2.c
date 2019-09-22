#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

//MANIPULACAO DE BITS COM UNION
union tipo
{
    short int x;//16 bits
    unsigned char c[2];//8 bits --> para cada posicao da array.
    
};
//acesso controlado a nivel de bits.

int main (void)
{
    union tipo v;
    v.x = 1545; //00000110 00001001
    printf("x = %d\n",v.x);
    // 00000110 -> 9 
    printf("c[0] = %d\n",v.c[0]);
    //00001001 -> 6
    printf("c[1] = %d\n",v.c[1]);
    return 0;
}
