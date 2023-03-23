/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67myfile.txt","r");
    char c = fgetc(ptr);
    printf("the character I read was %c \n",c);
    c = fgetc(ptr);
    printf("the character I read was %c \n",c);
    fclose(ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
        FILE *ptr = NULL;
    ptr = fopen("67myfile.txt","r");
    char str[4] ;
     fgets(str,3,ptr);
    printf("the string is %s\n", str);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","w");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","r+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","w+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","a+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}
