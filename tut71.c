//COMMAND LINE ARGUMENT
   /*you have to create a command line utility to add/subtract/multiply /divide two number 
    first command line argument  of your c programs must be the operation
    the enxt argument being the two numbers.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char  *argv[])
{
    char * operation;
    int num1,num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
   num2 = atoi(argv[3]);
// ATOI IS A function which convert string into integer.

   printf("operation is %s\n",operation);
   printf("Num1 is %d\n",num1);
   printf("Num2 is %d\n",num2);
   if (strcmp(operation,"add")==0)
   {
    printf("%d\n",num1+num2);
   }

   else if (strcmp(operation,"subtract")==0)
   {
    printf("%d\n",num1-num2);
   }
   else if (strcmp(operation,"multiply")==0)
   {
    printf("%d\n",num1*num2);
   }
   else if (strcmp(operation,"divide")==0)
   {
    printf("%d\n",num1/num2);
   }
    return 0;
}
/*OUTPUT:1
 .\tut71.exe add 3 5
operation is add
Num1 is 3
Num2 is 5
8*/