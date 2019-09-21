#include <stdio.h> //printf and scanf

//calculando a media de um vetor
int main(void){
    int n,m;
    printf("Entre o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor [n];
    for (int i=0;i<n;i++){
        printf("Entre o elemento da %d posicao: ",i+1);
        scanf("%d",&vetor[i]);
            m += vetor[i];
    }
    m = m/n;
    printf("A media e aproximadamente: %d\n",m);

}
