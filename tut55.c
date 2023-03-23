#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 334;
    int *ptr;//this is a wild pointer
  //  *ptr =34;//this is not a good thing to do so
    ptr=&a;
    printf("the value of a is %d\n",*ptr);
    return 0;
}

//output:the value of a is 334