#include <stdio.h> //printf and scanf
#include <stdlib.h>//conversão, memória, controle de processo, ordenamento e busca, matemática.

//passando matriz pra funcao

void imprime (int m,float mat[][4]){ //m eh o numero de linhas.
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<4;j++){
            printf("M(%d,%d)=%1.f\t",i,j,mat[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    float mat [3][4] = {
        {1.0f,5.0f,2.0f,0.0f},
        {8.0f,2.0f,3.0f,1.0f},
        {1.0f,6.0f,7.0f,2.0f}
    };
    imprime(3,mat);
    return 0;
}
