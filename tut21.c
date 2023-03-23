// why RECURSION?
//however some problem are best suited to  be solved using reccursion
 //for e.g. tower of hanoi,fibbonacci series,factorial finding etc.
 //FACTORIAL CALCULATION
 // the case at which the functiondoesnot recur is called the base case.
 //the instance where the function itself to perform a subtask it is called the recursive case.
 //for factorial calculation the base occur at the parameter value of 0 and 1(0!=1,1!=1)
 // we can also find factorial with for loop.
 #include<stdio.h>
 //we candeclare function or not function run because declaration is not must condition
 int factorial(int number);//FUNCTION DECLARATION

 int factorial(int number){        //FUNCTION DEFINITION
    if (number==1||number==0)
    {
        return 1;
    }
    else{
        return(number*factorial(number-1));  //RECURSIVE CALL
    }
    
 }
 int main()            //FUNCTION CALL
 { int num;
    printf("Enter the number you want the factorialof:\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n",num,factorial(num));
    
    return 0;
 }
