#include <stdio.h> //printf and scanf

int fat (int num){
    int i;
    int fatorial = 1;
    for (i = 1; i<= num; i++)
        fatorial *=i;
    return fatorial;
}

int main (void){
    int num, resultado;
    printf("Digite um numero positivo: ");
    scanf ("%d",&num);
    resultado = fat(num); //Calling the function 
    printf("Fatorial = %d\n",resultado);
    return 0;
}
