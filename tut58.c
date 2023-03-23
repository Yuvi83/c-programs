//c preprocessor
#include<stdio.h>
#include<stdlib.h>
int* functionDangling()
{
    int a,b,sum;
    a=34;
    b=43;
    sum = a+b;

    return &sum;
}

int main()
{
    
    return 0;
}