#include <stdio.h> //printf and scanf

//formula => resultado = n!/(n-k)!
int arranjo (int n, int k)
{
    int fatorial = 1;
    int fatorial2 = 1;
    int divisor = (n-k);
    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    for(int i = 1;i <= divider; i++)
    {
        fatorial2 *=i;
    }
    int resultado = (factorial/factorial2);    
    return resultado;
}


int main (void)
{
    int n,k,resultado;
    printf("Digite um numero positivo:\n");
    scanf("%d",&n);
    printf("Digite outro numero positivo:\n");
    scanf("%d",&k);
    result = arranjo(n,k);
    printf("O resultado de %d!/(%d-%d)! eh: %d\n",n,n,k,result);
}   
