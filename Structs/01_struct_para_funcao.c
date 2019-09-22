#include <stdio.h> //scanf printf

//utilizando structs
typedef struct ponto 
{
    float x;
    float y;
}ponto;

void imprime(struct ponto p){
    printf("O ponto fornecido foi: (%.2f,%.2f)\n",p.x,p.y);
}

int main(void)
{
    struct ponto p;
    printf("Digite as coordenadas do ponto (x,y): ");
    scanf("%f %f",&p.x,&p.y); //acessando x e y da struct
    imprime(p);
    return 0;
}
