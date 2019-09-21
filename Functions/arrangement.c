#include <stdio.h> //printf and scanf

//formula => result = n!/(n-k)!
int arrangement (int n, int k)
{
    int factorial = 1;
    int factorial2 = 1;
    int divider = (n-k);
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    for(int i = 1;i <= divider; i++)
    {
        factorial2 *=i;
    }
    int result = (factorial/factorial2);    
    return result;
}


int main (void)
{
    int n,k,result;
    printf("Type a positive number: ");
    scanf("%d",&n);
    printf("Type another positive number: ");
    scanf("%d",&k);
    result = arrangement(n,k);
    printf("The result of %d!/(%d-%d)! is: %d\n",n,n,k,result);
}   
