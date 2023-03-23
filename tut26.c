//WHAT IS A POINTER
/* 1).variable which stores the address of another variable
2).canbe of type int ,char or any other pointer 
3).size depent on architecture e.g 2bytes for 32 bits
pointer declared by * symbol
int *ptr=&var;
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("lets learn about pointer\n");
   int a = 76;
   int  *ptra=&a;
   int *ptr2 = NULL;
   //%x is number in hexadecimal format
   //print pointer address
  printf("the address of a pointer to a is %p\n",&ptra);
   printf("the value of a is %d\n",*ptra);

  printf("the address of a is %p\n",&a);
printf("the value of a is %x\n",ptra);
printf("the address of a is %p\n",ptra);
printf("the value of a is %d\n",a);

//&a=ptra
  
  
  printf("the address of some garbage is %p\n",ptr2);
   
    return 0;
}
//OUTPUT4:
//NULL POINTER
/*A pointer that is not assigned any value but null is known as the null pointer.
in computer programming ,a null pointer is a pointer that does not point to any object or function.
we can use it to initialize apointer variable when the pointer variable is not assign any valid memory address yet.
int *ptr=NULL;
*/