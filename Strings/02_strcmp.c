#include <stdio.h> //printf and scanf
#include <string.h>//funcoes para manipular strings

//strcmp compara o conteudo de duas strings (string1,string2);
//Valores de retorno -> 0 = conteudo das strings sao iguais
//<0 = conteudo da string1 eh menor do que string2
//>0 = conteudo da string1 eh maior do que string2

int main(void){
    char str1[4] = "abc";
    char str2[4] = "abc";
    int retorno;
    retorno = strcmp(str1,str2);
    printf("O retorno eh %d\n",retorno);
    if(retorno == 0)
        printf("O conteudo das strings eh igual\n");
    if(retorno < 0 )
        printf("O conteudo da primeira string eh menor\n");
    if(retorno > 0)
        printf("O conteudo da primeira string eh maior\n");
    return 0;
}
