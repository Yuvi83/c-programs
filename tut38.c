//typedef
#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

}std;
int main()
{
   /* int* a,b;//int *a , b treated like this.
   //here this type declaration make [a is pointer],[b is integer]
    int c=89;
    a=&c;
    b=&c;
    */
   typedef int* intpointer;
   intpointer a,b;
   int c=89;
   
   a=&c;
   b=&c;


    // std s1,s2;
    // s1.id = 34;
    // s2.id=56;
    //printf("value of s1 id is %d\n",s1.id);
     //printf("value of s2 id is %d\n",s2.id);



    return 0;
}