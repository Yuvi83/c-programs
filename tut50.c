#include <stdio.h>
#include <stdlib.h>

// Dynamic memory allocation problem
// ABC Pvt Ltd manage record of other companies
// Employeee id can be of any length and it can contain any character.
// for 3 employees,you have to take length of employee id as input in alength integer variable.
// then,you have to take employee id as an input and dissplay it on screen.
// store the employee id in a character array which is allocated dynammically.
// you have to create only one characteer directly.
// EXAMLE 1:
// Enter no of character in your Id
// 45
// dynamically allocate the character array.
// take input from user

// EXAMLE 2:
// Enter no of character in your Id
// 54
// dynamically allocate the character array.
// take input from user

// EXAMLE 3:
// Enter no of character in your Id
// 67
// dynamically allocate the character array.
// take input from user
int main()
{
    int chars, i = 0;
    char *ptr;
   char a,b;
    while (i < 3)
    {
    printf("Employee %d:Enter the number of character in your Employee Id \n",i+1);
    scanf("%d",&chars);
    getchar();
    printf("enter the value of a\n");
    scanf("%c",&a );
    getchar();
    printf("enter the value of b\n");
    scanf("%c",&b );
    getchar();
    ptr =(char *)malloc((chars+1)*sizeof(char));
    printf("enter your employee id\n");
    scanf("%s",ptr);
    getchar();
    printf("your employee id is %s\n",ptr);
    free(ptr);
        i = i + 1;
    }

    return 0;
}
//not give the input of 'a'because print Enter as valid character so fix this problem
// so we use getchar();
