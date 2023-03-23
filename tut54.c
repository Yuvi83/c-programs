#include<stdio.h>
#include<stdlib.h>
int main2()
{
    int *ptr = (int*)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1] = 43;
    free(ptr);

    return 0;
}