#include <stdio.h> //printf and scanf
#include <string.h>//funcoes para manipular strings

//strcpy(string_destino, string_origem);

int main(void){
    char nome[15];
    char nome1[15];
    
    printf("Digite seu nome: ");
    scanf("%s",nome);

    printf("Nome 1 = %s \n",nome);

    strcpy(nome1,nome);
    printf("Nome2 = %s", nome1 \n);

}
