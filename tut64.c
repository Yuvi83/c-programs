//FILE I/O FUNCTION IN C

/*WORKING WITH FILE IN C
---->WHEN working with files,we have to declare a pointer of type FILE.[file *ptr =NULL;]
--->This declaration helps us to work with files through c program
*/
//file SAVE HARD DISK(as files)

/*OPENING A FILE =CREATING OR EDITNG A FILE
-->stdio.h contains a function called fopen() for opening file in C.
SYNTAX FOR OPENING A FILE IN STANDARD I/O IS:
ptr = fopen("fileopen","mode")
MODE-->'r'(read),'w'(write),'a'(append),'rb'(read binary mode)
-->for e.g. fopen("E:\\Code\\harry.txt","w")
--->fopen("E:\\Code\\bhai.bin","rb");
*/

/*CLOSING A FILE
Any file which is opened in a C program  needs to be closed.
closing a file is accomplished by the library function fclose()
fclose(fptr);//fptr is the file pointer associated with file to be closed 
*/
/*READING A FILE
-->in order to read a file,we can use fscanf function.
-->this function is file version of scanf function
-->fscanf expect a file pointer in addition to the other arguments which scanf expects.
-->we will have to open the file in read mode in order to use this function
*/
/*WRITING TO A FILE
-->in order to write to a file,we can use fprintf function
--->this function is file version of printf function
-->fprintf expects a file pointer in addition to the other arguments which printf expects
-->we will have to open the file in write mode in order to use this function
*/
#include<stdio.h>
int main()
{   //*******writing a file***********
    FILE *ptr=NULL;
    char string[64]="this content was produced by tut64.c";
    ptr = fopen("64myfile.txt","a");  
    fprintf(ptr,"%s",string);
    return 0;
}