    //you have to fill in value in template letter.txt
    //letter.txt look something like this
    // thanks {{name}} for purchasing {{item}} from our outlet {{foutlet}}
    //please visit our outlet {{outlet}}  for any kind of problem. we plan to server you again soon
    //you have to read this file and replace these values 
    //{{name}} - harry
    //{{item}} - table fan
    //{{outlet}} - ram laxmi fan outlet
    //use file function in c to accomplish the same
    
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * replaceword(const char * str, const char * oldWord , const char * newWord){
    char *resultstring;
    int i,count =0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    //Lets count the number of times old word occcur in the string
    for ( i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i],oldWord)==&str[i])
        {
            count++;
            // jump over this word
            i=i+oldWordLength-1;
        }  
    }
    //making a new string to fit in the replace words
    resultstring = (char *)malloc(i+count * (newWordLength-oldWordLength)+1);

    i = 0;
    while (*str)
    {
        //compare the substring with result
        if(strstr(str,oldWord)==str)
        {
            strcpy(&resultstring[i],newWord);
            i+=newWordLength;
            str+=oldWordLength;
        }
        else{
            resultstring[i] = *str;
            i+=1;
            str+=1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
    
    
}
int main()
{
    FILE *ptr =NULL;
    FILE *ptr2 =NULL;
    ptr = fopen("69bill.txt","r");
    ptr2 = fopen("69genbill.txt","w");//this line will create new text file name 69genbill.txt
    char str[200];
    fgets(str,200,ptr);
    printf("the given built template was: %s\n",str);

    // call the replaceword function and generate newstr

    char * newStr = str;
       newStr = replaceword(str,"{{item}}","Table Fan");
      newStr = replaceword(newStr,"{{outlet}}","Ram Laxmi fan outlet");
     newStr = replaceword(newStr,"{{name}}","harry");
    printf(" the actual bill generated is: %s\n",newStr);
    printf("The generated bill has been written to the file 69genbill.txt\n");
    fprintf(ptr2,"%s",newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}