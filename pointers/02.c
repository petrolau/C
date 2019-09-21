#include <stdio.h> //printf and scanf

// Passagem de ponteiros para funcoes.
void troca(int *px, int *py) //recebe dois ponteiros que apontam para inteiros
{
    int temp; //vai guardar o valor de uma variavel.
    temp = *px;
    *px = *py;
    *py = temp;
}

int main (void)
{
    int a =5,b=7;
    troca(&a,&b);
    printf("primeiro numero = %d e segundo numero =  %d \n",a,b);//px e ponteiro que aponta para A e py e ponteiro que aponta para b
    return 0;
}
