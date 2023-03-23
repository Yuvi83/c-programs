//#INCLUDE  & #DEFINE PREPROCESSOR IN C
/*THE #INCLUDE DIRECTIVE
--->The #include directive causes the preprocessor to fetch the content of some other file to be included in the present file.
--->this file may in turn #include some other file(s) which may in turn do the same.
--->most commonly #include filehave a."h" extesion,indicating that htey are header files.
*/

/*TWO COMMON #INCLUDE FORMATS
--->In C programming there are two common format for #includes:
------>#include<headerfile.h>//the angle bracket say to look in the standard directories
------>#include "myfile.h" //the quatation marks say to look in the current directory
//DISK DRIVE full path is allowed, but discouraged since it is not portable:
------>#include<C:\program files\haary\bhai\somefile.h> //Too specific
------>#include<sysfile.h>//Relative and Portable path to the standard locations.
*/
//ctrl+F is use to FIND AND REPLACE THE WORD
//#DEFINE DIRECTIVE
/*
the #define directive is used to "define" preprocessor "variables".
the #define preprocessor directive can be used to globally replace a word with a number
it acts as if an editor did a global search-and-replace edit of the file.
#define pi=3.14
int a; char b;
*/
//USING #DEFINE FOR DEBUGGING
/* 
#define directivve can be used for debugging
we can have printing the statement that we only want active when debugging.
we can "protect" them in a "ifdef"
block as follows:
#define DEBUG
#ifdef DEBUG 
print statement 
#endif
#undef DEBUG 
*/
//MACROS USING #DEFINE
//We can also create macros using #define
//Macros operate much like function,but because they are expanded in place and are generally faster
/* #define PI=3.14
#define SQUARE[x]*[x]
area = PI*SQUARE(radius);
area = 3.14*radius*radius;
*/
#include<stdio.h>
#include"tut54.c"
#define PI 3.14
#define SQUARE(r) r*r
int main()
{
    float var = PI;
    int r =4;
    printf("this is PI is  %f\n",var);   
    printf("the arre a of the circle is %f\n",PI*SQUARE(r));

    return 0;
}
//output
//this is PI is  3.14000
// the arre a of the circle is 50.240000