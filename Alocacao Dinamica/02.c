#include <stdio.h>
#include <stdlib.h>

void captura (int num_componentes,float* vetor_dinamico);
float media (int num_componentes,float* vetor_dinamico);
float variancia (int num_componentes,float* vetor_dinamico,float m );

int main(void){
    int num_componentes;
    float *x; //vetor dos valores

    printf("Entre com o numero de valores: ");
    scanf("%d",&num_componentes);
    //alocando espaco pro vetor dinamico.
    x = (float *)malloc(num_componentes*sizeof(float));

    if(x == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    captura(num_componentes,x);
    float m = media(num_componentes,x);
    float v =variancia (num_componentes,x,m);
    printf("Media = %f\nVariancia = %f\n",m,v);
    free(x); //no fim de tudo, libera espaco.
    return 0;
}

void captura (int num_componentes,float* vetor) //vai preencher o vetor
{
    printf("Entre com os valores:\n");
    for(int i = 0; i < num_componentes; i++)
        scanf("%f",&vetor[i]); 
}
float media (int num_componentes, float* vetor)
{
    float m = 0.0f; //inicializando m como 0.0f(float e n double)
    for(int i = 0; i < num_componentes; i++ )
        m +=vetor[i];
    return m/num_componentes;
}
float variancia (int num_componentes, float* vetor, float m)
{
    float v = 0.0f;
    for(int i = 0; i < num_componentes; i++)
        v+=(vetor[i]-m)*(vetor[i]-m);
    return v/num_componentes; 
}
