#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*duas circunferencias, fazer uma bateria de testes:
tangentes internas (d = r1+r2);
tangentes externas(d = r1*r2);
externas(d > r1+r2);
secantes(d < r1+r2);
internas(d < r1+r2);
concentricas (d=0);
*/

typedef struct 
{
    float r1;
    float r2;

}circ;


void checar(float d,circ raio)
{
    if(d = raio.r1+raio.r2)
        printf("Sao tangentes internas");
    else if(d = raio.r1*raio.r2)
        printf("Sao tangentes externas");
    else if (d > raio.r1+raio.r2)
        printf("Sao externas");
    else if (d < raio.r1+raio.r2)
        printf("Sao secantes e internas");
    else if( d = 0)
        printf("Sao concentricas");
    

}

int main(void)
{
    circ raio;
    
    printf("Entre o raio da primeira circunferencia: ");
    scanf("%f",&raio.r1);

    printf("Entre o raio da segunda circunferencia: ");
    scanf("%f",&raio.r2);
    
    float d;

    printf("Entre o diametro: ");
    scanf("%f",&d);

    checar(d,raio);
}
