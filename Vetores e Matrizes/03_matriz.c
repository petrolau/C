#include <stdio.h> //printf and scanf
#include <stdlib.h>//conversão, memória, controle de processo, ordenamento e busca, matemática.

//declarando matrizes
int main(void){
    float mat[3][4] = {
        {1.0f,5.0f,2.0f,0.0f},
        {8.0f,2.0f,3.0f,1.0f},
        {1.0f,6.0f,7.0f,2.0f}
    };
    printf("\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            printf("M(%d,%d) = %1.f\t",i,j,mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
