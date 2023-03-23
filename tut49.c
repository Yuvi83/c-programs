//WHAT IS STORAGE CLASSES IN C
/* A storage class is defien scope,default intitial value &Lifetime of a variable.
in previous lecturee we saw the dynamic memory allocation is a way in which the size of data structure can we changed during the runtime.
memory assigned to a program in a typical architecture can be  broken down into four segments
--->1.code  2.static/global variable  3.stack  4.heap  <-----
*/
//WHAT IS STORAGE CLASS READ PREVIOUS CLASS
//a storage class define following attribute about a variable in c.
//1.SCOPE -->where will this value be available
// 2.DEFAULT INITIAL VALUE 
//   3.LIFETIME -->life of that variable

//STORAGE CLASSES IN C
/*(automatic,external,static ,register) variable
*/

//AUTOMATIC VARIABLE:AUTO STORAGE CLASS

//Scope-->Local to the function body they are defined in
//Default value:Garbage value(a random value)
//Lifetime:Till the end of the function block they are defiend in

//A variable defined without any storage class specification is default an automatic variable
//int harry and auto int harry are same.

//EXTERNAL VARIABLE
// they are same as global variables
// SCOPE-->global to the program they are defined in
// Default initial value:0
// Lifetime-->these variable are declared outside any function they are available throughout the lifetime of the program.
//Aglobal variable can be changed by any function in the program.
//int harry written outside any function will tell compiler that harry is a global variable.
// It is recommended to minimize the use of unnecessary global variable in aprogram.


//EXTERNAL VARIABLES:EXTERN KEYWORD
//Extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
//using extern will not allocate space for the variable
 /*int main(int argc, char const *argv[])
 {
    int harry = 90;
    printf("%d",harry);
 }
 #include<stdio.h>
 extern int harry;
 int main()
 {
    harry =56; 
    printf("%d",harry);
 

    return 0;
 }
*/
//STATIC VARIABLE:STATIC STORAGE CLASS
// Scope-->local to the block they are defined in
//Default Initial value-->0
//Lifetime-->they are available throughout the lifetime of the program 
//A static variable  remain under existence for use within the function for entire program run.
//static int harry written inside any function will tell compiler that harry is static variable
//It is recommended to minimize the use of unnecessary static variable in aprogram.


//REGISTER VARIABLE:REGISTER STORAGE CLASS
/*1. SCOPE-->local to the function they are declared in 
2. Default initial value -->garbage value
3. lifetime-->they are available till the end of the function value ,in which the variable is defined.
4. Register variable request the compiler to store the variable in cpu register instead of storing in the memory to have faster access.
5. Generally this is done for the variable which are being used frequently.
*/
#include<stdio.h>
int myfunc(int a,int b){
   register int myvar;
   myvar++;
   printf("my var is %d\n",myvar);
   return myvar;

}
int main(int argc, char const *argv[])
{
   int myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   return 0;
}

//output :
/*my var is 1
my var is 2
my var is 3
my var is 4
my var is 5
*/