#include <stdio.h>
#include <stdio.h>

int(isPalindrome(int num))
{
    int reversed = 0;
    int originalnumber = num;
    // lets reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("the Reversed number is %d\n", reversed);
    if (originalnumber == reversed)
    {
    
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    // palidrome number make
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    // your task is to implement the function
    if (isPalindrome(number))
    {
        printf("This number is palindrome \n");
    }
    else
    {
        printf("This number is not a palindrome \n");
    }

    return 0;
}
/*OUTPUT:
Enter a number to check whether it is a palindrome or not 
123454321
the Reversed number is 123454321
This number is palindrome 
*/