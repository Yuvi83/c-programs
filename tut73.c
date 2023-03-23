#include<stdio.h>
#include<stdlib.h>
int sum(int a ,int b){
    return a+b;
}
void greetHelloAndExecute(int (*fptr)(int,int)){
    printf("Hello  user   \n");
    printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
void greetGmAndExecute(int (*fptr)(int,int)){
    printf("Goood Morning user\n");
     printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
int main()
{
    int (*ptr)(int,int);
    ptr = sum;
    greetGmAndExecute(ptr);
    return 0;
}
/*OUTPUT:
Goood Morning user
the sum of 5 and 7 is 12
*/
//print a code for greetgoodafternoon and greetgoodevening find a average of two numbers