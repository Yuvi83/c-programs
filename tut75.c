/*MEMORY LEAK IN C
//WHAT IS MEMORY LEAK IN C
---->DYNAMIC MEMORY ALLOCATION is away in which the size of a data structure can be changed during the runtime.
---->Memory assigned to a program in a typical architecture can be broken down into four segments:
1.CODE      2.STATIC/GLOBAL VARIABLE        3.STACK     4.HEAP
*/
/* WHAT CAUSES  MEMORY LEAK IN C
--->With great power comes great responsibility
----->Memory leak is caused when we don't use dynamic memory properly.
------>when we keep on allocating memory in the heap without freing ,the overall memory usage keeps on increasing.
----->This situation is the cause of memory leak i.e the programmer creates a memory block in the memory and forget to delete it.
--->To avoid these memory leak situation,memory allocated on heap should always be freed when not needed.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i=0;
    int *i2;
    while (i<45554)
    {
        printf("Welcome to code with harry\n");
        i2=malloc(34444* sizeof(int));
        if (i%100==0)
        {
            getchar;
        }
        
        i++;
        free(i2);//without this we willencounter a situation a problem of memory leak.
    }
    
    return 0;
}
