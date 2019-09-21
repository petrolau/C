#include <stdio.h> //printf and scanf
#include <string.h>//funcoes para manipular strings

//strlen --> Determina o tamanho de uma string;

int main (void){
    char str[] = "Laura";
    int tamanho;
    tamanho = strlen(str);
    printf("O tamanho da string %s eh %d\n",str,tamanho);
}
