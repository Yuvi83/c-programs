#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d \n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument number %d has value of %s \n",i,argv[i]);
    }   
    return 0;
}
/*OUTPUT:
THE VALUE OF argc is 1 
this argument number 0 has value of C:\Users\HP\Desktop\c-programs\tut68.exe */
