#include<stdio.h>
void printstr(char str[]);
int main()
{
    //char str[] = {'h','a','r','r','y','\0'}; //harry
    //USER INPUT STRING
    char str[34] ; 
    printf("using custom function printstr\n");
    gets(str);
    //char str[100] ="harry";
    //printstr(str);
    printf("using in place of printstr %s\n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}
//in place of scanf we canuse gets functionality.
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {  
    printf("%c",str[i]);
    i++;
}
printf("\n");
}

//output:
// using custom function printstr
// hello
// using in place of printstr hello
// using puts:
// hello