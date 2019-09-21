#include <stdio.h> //printf and scanf
#include <string.h>//funcoes para manipular strings

//strings --> cadeia de caracteres
//necessário reservar uma posicao adicional no vetor para o caractere de fim da cadeia ('\0')


//inicializando uma string

int main(void){
    char estado [] = "Ceara";
    for(int i=0;i<6;i++){
        printf("%c\n",estado[i]);
    }
    return 0;
}
