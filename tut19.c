
//ARGUMENT AND RETURN VALUE
#include<stdio.h>
int add();
 int main()
{

   int a,b,c;
 //a=5;
  //b=7;
   c = add();
   c=add();
   
    
    return 0;
}
int add(){
    int x, y,sum;
    printf("enter number\n");
   scanf("%d%d",&x,&y);
   sum=x+y;
   printf("sum of two number is %d\n",sum);

    return 0;
}
//#include<stdio.h>
 //function declaration
// void printstar();

// int main()
// {
//     int a,b,n; //funtion call
//     a=9;
//     b=87;
    

//     printstar(n);
//     //printf("%d\n",c);
//   getch();
    
// }
// //FUNCTION DEFINITION
// void printstar()
// {
//     int n=7;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');//single quote use for character and double quote use for string.
//     }
    
//}
// #include<stdio.h>
//  //function declaration
// void printstar(int n);

// void main()
// {
//     int a,b,c; //funtion call
//     a=9;
//     b=87;

//     printstar(7);
//     //printf("%d\n",c);
//     //getch();
    
// }
// //FUNCTION DEFINITION
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');//single quote use for character and double quote use for string.
//     }
    
// }



