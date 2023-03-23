/*FORMAT SPECIFIER,CONSTANTS & ESCAPE SEQUENCE IN C*/
/*format specifier is a way to tell the compiler what type of data in a variable during taking input displaying output to the user
printf("this is a good boy %a.bf",var);will print var with b decimal point in a 'a character space.
lets to our IDE and learn about the format specifier.
*/
#include<stdio.h>
#define PI=3.14
int main()
{
    int a=8;
    const float b=7.33;
   // PI=7.33;//cannot do this because c is a constant

  //b=7.22;//cannot do this because c is a constant
    printf("the value of b is %8.4f\t\t",b);
    
    return 0;
}
