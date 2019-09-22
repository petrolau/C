#include <stdio.h> //printf and scanf

//Como inicializar ponteiros e utiliza-los.
int main (void)
{
    int a,b,c,*p;
    a = 2;
    p = &c; //Recebe a posicao na memoria de c.
    *p = 3; //c recebe o valor 3.
    b = a + (*p);
    printf("%d\n",b);
    return 0;
}
