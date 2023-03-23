// #include<stdio.h>

// int main()
// { int i,fib,num;
// printf("Enter a number:");
//   scanf("%d",&num);
// if (fib==0)
// {
//   printf("the number is: %d",fib);
//   return 0;
// }
// else (fib==1){
//   return 1;

// }
// for ( i = 0; i < n; i++)
// {
//   fib=fib+fib(num-1);
//   printf()
// }
//     return 0;
// }
#include<stdio.h>

int fib_recursive(int n)
{
  if (n==1||n==2)
  {
    return n-1;
  }
  else{
    return fib_recursive(n-1)+fib_recursive(n-2);
  }
}

 int fib_iteraive(int n)
{
  int a=0;
  int b=1;
  for (int i = 0; i < n-1; i++)
  {
     b=a+b;
     //a=(a+b)-a
     a=b-a;
  }
  
  return 0;
}

int main()
{
  int number ;
  printf("enter a number to get fibbonacci series\n");
  scanf("%d",&number);
  printf("the value of fibbonacci number at position no %d using iterative approach is %d:\n",number,fib_iterative(number));
  printf("the value of fibbonacci number at position no %d using recursive approach is %d:\n",number,fib_recursive(number));


  return 0;
}
