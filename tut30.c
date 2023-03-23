#include<stdio.h>
/*take input from the user and ask user to use 0 for triangular star pattern
and 1 for reversed triangular star pattern

*****
****
***
**
*

*
**
***
****
*****
*/
int main()
{   int;
    int i,j;
    for (int i = 1; i < 5; i++)
    {
        printf("*");
    for (int j=1;j <i; j++)
    {
        printf("\n");
    }
    }
     for (int i = 1; i<5; i++)
    {
        printf("*");
    for (int j=5;j >i; j++)
    {
        printf("\n");
    }
    }
    
    return 0;
}