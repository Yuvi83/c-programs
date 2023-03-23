#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    // printf("enter the number of rows in your first matrix\n");
    printf("Enter the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the %d rows %d column element of first matrix:\n", i, j);
            scanf("%d", &a[i][j]);
        }
       // printf("\n");
    }

    // enter second matrix
    printf("Enter your second matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d rows %d column of second matrix:\n",i,j);
            scanf("%d", &b[i][j]);
        
        }
        //printf("\n");
    }



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }


    // print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        // calculate the result
        
        {
            printf("%d \t", result [i][j]);
        }
        printf("\n");
    }

    return 0;
}