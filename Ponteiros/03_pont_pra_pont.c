#include <stdio.h>
#include <stdlib.h>


int main()
{
   char letra = 'a';
   char *ptrChar = &letra;
   char **ptrPtrChar = &ptrChar;
   char ***ptrPtr = &ptrPtrChar;
   printf("*ptrChar : %c\n",*ptrChar);
   printf("**ptrPtrChar : %c\n",**ptrPtrChar);
   printf("***ptrPtr : %c\n",***ptrPtr);
   return 0;
}
