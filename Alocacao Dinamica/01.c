#include <stdio.h> //printf and scanf
#include <stdlib.h>//manipulacao dinamica de memoria

/*
sizeof --> determina o numero de bytes para um determinado
tipo de dados.

malloc --> aloca um espaco de memoria e retorna um ponteiro do tipo 
void para o inicio do espaco de memoria alocado.

free --> libera o espaco de memoria alocado

Exemplo = VETOR DINAMICO;
basicamente, deve-se declarar o vetor como ponteiro, utilizando,
depois, a funcao malloc com sizeof.

*/
int main(void)
{
    float *v; //ponteiro v sendo definido.
    int i, num_componentes;
    
    printf("Informe o numero de componentes do vetor: \n");
    scanf("%d",&num_componentes);   

/* ------------- Alocando dinamicamente o espaço necessário -------------
  
  1 - Calcular o número de bytes necessários
  primeiramente multiplicamos o número de componentes do vetor 
  pela quantidade de bytes que é dada pelo comando sizeof,
  portanto temos:
  num_componentes * sizeof(float)
  
  2 - Reservar a quantidade de memória
  usamos malloc para reservar essa quantidade de memória,
  então temos:
  malloc(num_componentes * sizeof(float))
  
  3 - Converter o ponteiro para o tipo de dados desejado
  como a função malloc retorna um ponteiro do tipo void,
  precisamos converter esse ponteiro para o tipo da nossa variável,
  no caso float,por isso usamos o comando de conversão explicita:
  (float *)
  
  4 - juntando tudo e atribuindo em v temos o comando abaixo: 
*/
    //reservando a quantidade de memoria do vetor
    v = (float *) malloc(num_componentes * sizeof(float));
    //armazenando os dados em um vetor
    for (i = 0; i < num_componentes; i++)
    {
        printf("\n Digite o valor para a posicao %d do vetor: ",i+1);
        scanf("%f",&v[i]);
    }
    //percorrendo o vetor e imprimindo os valores
    printf("\n********* Valores do vetor dinamico **********\n\n");
    for( i = 0; i < num_componentes; i ++)
        printf("%2.f\n",v[i]);

    return 0;
}
