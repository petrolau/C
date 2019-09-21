#include <stdio.h> //printf and scanf
#include <stdlib.h>//conversão, memória, controle de processo, ordenamento e busca, matemática.
#define N 100
//passar um vetor para funcao => equivalente a passar o endereco incial do vetor.

void captura (int n, float* x){ //alocar os valores no vetor
    for (int i =0; i<n; i++){
        printf("Entre com o %d valor:\n",i+1);
        scanf("%f",&x[i]);
    }
}
float media (int n,float* x){
    float m = 0.0f;
    for (int i=0; i<n; i++)
        m +=x[i];
    return m/n;
} 

float variancia (int n,float* x,float m){
    float v = 0.0f;
    for(int i=0;i<n;i++)
        v+=(x[i]-m) * (x[i]-m);
    return v/n;
}

int main (void){
    int n; //numero de posicoes que eu irei alocar valores no vetor
    float x[N];//N eh numero total de posicoes do vetor
    printf("Entre com o numero de valores do vetor: ");
    scanf("%d",&n);
    if (n>N){
        printf("Valor ultrapassa o limite de %d.\n",N);
        return 1;
    }
    captura(n,x);
    float m = media(n,x);
    float v = variancia(n,x,m);
    printf("Media = %f\nVariancia = %f\n",m,v);
    return 0;
}
