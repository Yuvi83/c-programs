#include<stdio.h>
#include<stdio.h>

int (isPalindrome(int num)){
    return 1;
}
int main()
{
    //palidrome number make
    int number ;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d",&number);
    //your task is to implement the function
    if (isPalindrome(number))
    {
        printf("This number is palindrome \n");
    }
    else{
        printf("This number is not a palindrome \n");

    }
    
    return 0;
}