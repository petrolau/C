#include <stdio.h> //printf and scanf
#include <stdlib.h>//conversão, memória, controle de processo, ordenamento e busca, matemática.

//matriz simetrica ou nao?
int simetrica (int matriz[3][3])
{   int aux=0;
    for(int i = 0 ; i < 3; i++)
        for(int j = 0; j < 3; j++){
            if(matriz[i][j]==matriz[j][i])
                aux +=1;
        }
    return aux;

}

int main(void)
{
    int matriz[3][3],i,j;
    
    printf("Digite o valor para os elementos da matriz \n\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] =",i,j);
            scanf("%d",&matriz[i][j]);
        }
    printf("\n\n******************* Saida de Dados *******************\n\n");
    for (i = 0; i < 3; i++)
        for(j = 0;j < 3; j++)
        {
            printf("\nElemento[%d][%d] = %d\n",i,j,matriz[i][j]);
        }
    int resultado = simetrica(matriz);

    if (resultado == 9){
        printf("A matriz eh simétrica\n");
    }
    if (resultado != 9){
        printf("A matriz nao eh simétrica\n");
    }
}

