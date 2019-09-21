#include <stdio.h> //printf and scanf
#include <string.h>//funcoes para manipular strings

//strcat (string_destino,string_origem) --> Concatenar.

int main(void){
    char str1[14] = "Laura";
    char str2[9] = "Petrola";

    strcat(str1,str2);
    printf("%s\n",str1);

    //precisa da quantidade de caracteres a serem copiados.
    char str3[13] = "Laura";
    char str4[8] = "Petrola";
    strncat(str3,str4,5);
    printf("Nova string = %s \n",str3);

}
