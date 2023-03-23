#include<stdio.h>
int main(int argc, char const *argv[])
/*{ int num;
    printf("enter the number you want to multiplication table of:\n");
    scanf("%d",&num);
    printf("Multiplication table of %d is as follows\n",num);
    printf("%d X 1 = %d\n",num,num*1);
    printf("%d X 2 = %d\n",num,num*2);
    printf("%d X 3 = %d\n",num,num*3);
    printf("%d X 4 = %d\n",num,num*4);
    printf("%d X 5 = %d\n",num,num*5);
    printf("%d X 6 = %d\n",num,num*6);
    printf("%d X 7 = %d\n",num,num*7);
    printf("%d X 8 = %d\n",num,num*8);
    printf("%d X 9 = %d\n",num,num*9);
    printf("%d X 10 = %d\n",num,num*10);
    return 0;
}*/
{
    int num;
    printf("enter the number you want to multiplication table of:\n");
    scanf("%d",&num);
    printf("Multiplication table of %d is as follows\n",num);
    for (int i = 1; i <=10; i++)
    {
        printf("%d X %d =%d\n",num,i,num*i);
        
    }
    
    
    return 0;
    
}
