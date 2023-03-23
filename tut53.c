//what is NULL POINTER
/*Null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object.
a null pointer is guaranted to compare unequal to any pointer thet points to a valid object.
Dereferencing a nulll pointer is undefined behaviour in c and a conforming implementation is allowed to assume that any pointer that is dereferenced is not null.
*/
/*
Null pointer is a pointer which has value reserved for indicating that the pointer or refernce does not refer to a vallid object.
a null pointeer is guaarnteed to compare unequal to aany pointer that points to a valid object.
NULL Pointer is a specific pointer which is mentioned i C standard and it has specific purpose
NULL Pointer gives a functionality to C programmer to check whether a pointer is legitimate or not
*/
//NULL POINTER :C PROGRAM

/*
a null pointeer is apointer that point to NULL (nothing)
a null pointer shold not be dereferenced
a check must be run by the c programmer to know whether a pointer is null before dereferencing it.

int x =10;
int *p =NULL;//null pointer(here can't be dereferenced)
p=&x;//null pointer now holds address of int 'x'(can be dereferenced)
*/

//USE OF NULL POINTER
/*TO initialize a pointer variable in case where poimter variable has not been assign any valid address yet.
to check for legitimate address location before acceging anu pointer variable.
By doing so,we can perform error handling while using pointer with C.
Example of such error handling can be: dereference pointer varianle only if it's not null.
to pass a null pointer to a function argumentwe don't want to pass any valid memory address.
func(char str[32],char *p)
{
    p==NULL;
}
*/

//MORE ON NULL POINTER
/*
NULL macro is defiend as ((void*)0) in header files of most of the c compiler implementation.
//NULL POINTER VS UNINITIALIZED POINTER
-->an unitialized pointer contain undefined value
-->a null pointer store a defined value which is the one decided buy environment to not be a valid memory address for any object.
NULL pointer vs VOID pointer
--->Null pointer is a value where as void pointer is a type
*/
#include<stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a;
    // int *ptr= NULL;
    if (ptr!=NULL)
    {
  printf("the value of a is %d\n",*ptr);

    }
    else{
        printf("the pointer is a null poiner and cannot be dereferenced");
    }
    
    printf("the address of a is %d\n",ptr);
    return 0;
}
//OUTPUT:
/*the value of a is 34
the address of a is 6422296
*/