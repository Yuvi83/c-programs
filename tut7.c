#include <stdio.h>
int main()
{
    /* code */
    int a, b ,c;
    a = 2;
    b = 3;
    
   printf("a&b=%d\n", a&b);
    printf("a|b=%d\n", a|b); 
    printf("a^b=%d\n", a^b);
   
  return 0;
}/*output
a&b=2 (10)
a|b=3 (11)
a^b=1 (01)*/