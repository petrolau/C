#include <stdio.h> //printf and scanf
#include <stdlib.h>//conversão, memória, controle de processo, ordenamento e busca, matemática.

//matriz transposta
void transposta (int i, int j, int matriz[3][3])
{   int aux;
    for(int i = 0 ; i < 3; i++)
        for(int j = 0; j < 3; j++){
            aux = matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=aux;
        }
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
        {
            printf ("\nElemento[%d][%d] = %d\n ",i,j,matriz[i][j]);
        }
    printf ("\n");
}

int main(void)
{
    int matriz[3][3],i,j;
    int resultado;
    
    printf("Digite o valor para os elementos da matriz \n\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] =",i,j);
            scanf("%d",&matriz[i][j]);
        }
    printf("\n\n******************* Transposta *******************\n\n");    
    transposta(i,j,matriz);
   
    
}
