//FUNCTION CALL BY VALUE CALL BY REFERENCE
//When afunction is called the values(expression) that are passed in the called the argument or actual parameter
//formal parameter are local variable which are assigned values from the argument when the function is called

//TYPES OF FUNCTION CALLS IN C PROGRAMMING
/*IN C PROGRAMMING LANGUAGE WE CALL A FUNCTION IN TWO DIFFERENT WAYS ,BASED ON HOW WE SPECIFY THE ARGUMENT AND THESE TWO WAYS ARE:
#call by value ,call by reference
*/
//call by value 
//when we call afunction by value it means that we are passing the values of the arguments which are copied into the formal parameters of the function.
//which means that the original value remain unchanged and only the parameter inside the function changes.

//CALL BY REFERENCE
//the call by reference method of passing argument of c function copies the address of the argument into the formal parameters
//address of the formal argument are copied and then assigned the corresponding formal argument.
//CALL BY REFERENCE 
/* #include<stdio.h>
 void  changevalue( int *num1, int*num2);

  *num1 =23;
  *num2=32;

  // void  changevalue( int *address){
  //   *address = 345;//value at address

  // }

 int main()
 { int a=34,b=56,sum;
 
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
       
    printf("the sum is %d\n",a+b);
     changevalue(&a);
     changevalue(&b);
     sum=a+b;

     printf("the sum is %d\n",sum);


    
    return 0;
 }
 */
#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}
