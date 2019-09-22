#include <stdio.h> //scanf printf

//utilizando structs
typedef struct ponto 
{
    float x;
    float y;
}ponto;

void imprime(ponto p){ //usando o typedef nao preciso usar o "struct" antes de ponto p.
    printf("O ponto fornecido foi: (%.2f,%.2f)\n",p.x,p.y);
}

int main(void)
{
    ponto p; //declaracao sem struct por conta do typedef
    printf("Digite as coordenadas do ponto (x,y): ");
    scanf("%f %f",&p.x,&p.y); //acessando x e y da struct
    imprime(p);
    return 0;
}
