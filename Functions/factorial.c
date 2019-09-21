#include <stdio.h> //printf and scanf

int fat (int number){
    int i;
    int factorial = 1;
    for (i = 1; i<= number; i++)
        factorial *=i;
    return factorial;
}

int main (void){
    int number, result;
    printf("Type a non-negative number: ");
    scanf ("%d",&number);
    result = fat(number); //Calling the function 
    printf("Factorial = %d\n",result);
    return 0;
}
