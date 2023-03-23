  #include<stdio.h>
  int main(int argc, char const *argv[])
  {
    int a,b;
    
   printf("Enter your math marks\n");
   scanf("%d",&a);
   printf("Enter your science marks\n");
   scanf("%d",&b);
  // printf("you have gift %d for your good marks\n",gifts);
if (a>=33) 
{
    printf("you passed math! and gifted you 15rs.");
}
else if (b>=43)
{
    printf("you passed science and gifted you 15rs.!");
}
else if(a>=43)
{
    printf("you are passed science and math and gifted you 45rs.!");
}

else{
    printf("you are failed!");
}
// else is not a must condition to write we can ignorre it .

    return 0;
  }
  