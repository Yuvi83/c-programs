//string.h
/* strcat(),strlen(),strrev(),strcpy(),strcmp()
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("the strcmp for s1,s2 returned %d",strcmp(s1,s2));

    // // s3 = strcat(s1,s2);this syntax not allow this problem solve by strcpy
    strcpy(s3,strcat(s1,s2));
     puts(s3);
    puts(strcat(s1,s2));
    printf("the length of s1 is %d \n",strlen(s1));
    printf("the length of s2 is %d \n",strlen(s2));
    printf("the reversed string  of s1 is:\n");
    puts(strrev(s1));
    printf("the reversed string  of s2 is:\n");
    puts(strrev(s2));
    return 0;
}
//OUTPUT:-1