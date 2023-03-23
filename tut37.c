#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};

int main()
{
    struct Student harry,ravi,subham;
    harry.id =1;
    ravi.id = 2;
    subham.id =3;
     harry.marks=23 ;
    ravi.marks=34 ;
    subham.marks=43;
    harry.fav_char='p';
    ravi.fav_char='q';
    subham.fav_char='r';
    strcpy(harry.name,"HArry potter student of the year");
     strcpy(ravi.name,"ravi potter student of the year");
    strcpy(subham.name,"subham potter student of the year");



    printf("harry got %d marks\n",harry.marks);
     printf("ravi got %d marks\n",ravi.marks);
    printf("subham got %d marks\n",subham.marks);
    printf("harry got %d id\n",harry.id);
     printf("ravi got %d id\n",ravi.id);
    printf("subham got %d id\n",subham.id);
    printf("harry got %c character is:\n",harry.fav_char);
    printf("ravi got %c character is:\n",ravi.fav_char);
    printf("subham got %c character is:\n",subham.fav_char);




    printf("harry's name is:%s\n",harry.name);
    printf("ravi name is:%s\n",ravi.name);
    printf("subham name is:%s\n",subham.name);





    
    return 0;
}
