#include <stdio.h>
int func1(int arr1[]);
void func2(int *ptr);
void func3(int arr[2][2]);

int main()
{
    int arr[][2] = {{23, 13}, {3, 4}};

    func3(arr);
    // func2(arr);
    // func2(arr);

    return 0;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

// the value of 0,0 is 23
// the value of 0,1 is 13
// the value of 1,0 is 3
// the value of 1,1 is 4
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 0) = 34;
}

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, array[i]);
    }
    array[0] = 382;
    return 0;
}