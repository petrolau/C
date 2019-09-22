#include <stdio.h> //scanf printf

//utilizando structs
typedef struct ponto 
{
    float x;
    float y;
}ponto;


int main(void)
{
    struct ponto p;
    printf("Digite as coordenadas do ponto (x,y): ");
    scanf("%f %f",&p.x,&p.y); //acessando x e y da struct
    printf("O ponto fornecido foi: (%.2f,%.2f))\n",p.x,p.y);
    return 0;
}
