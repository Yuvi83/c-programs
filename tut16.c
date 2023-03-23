//BREAK STATEMENT
//used to bring the program control out the loop
//the break statement is used inside loops or switch statement
//break statement can we used with[loops,switch case expression]

//CONTINUE STATEMENT
//USE TO bring the program control to the next iteration of the loop
//the continue statement skips some code inside the loop and continue with next iteration
// it is mainly used for a condition so that we can skip some lines of code for a particular condition.
#include<stdio.h>
int main(int argc, char const *argv[])
{ int i,age;
    for (i=0; i<10; i++)
    {
        printf("%d\n Enter your age",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("we have not come acros any continue statement \n");printf("we have not come acros any continue statement \n");printf("we have not come acros any continue statement \n");printf("we have not come acros any continue statement \n");printf("harry is a good man \n");
        
    }
    
    
    return 0;
}
/*OUTPUT:
if we give input age>10 these printf line will not execute but if age<10 then this line will execute.
*/
