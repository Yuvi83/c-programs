  /*
    you manage a travel agency and you wan your n driver to input their following details:
    1.Name
    2.Driving Liscence number
    3.Route
    4.Kms
    your program should be able to take n as input and your driver will start inputting their detail one by one
    your program should print details of the driver in a beautiful fashion.
    n=3 take
    
    */
#include<stdio.h>
#include<string.h>

/*typedef use and solve */
struct Driver{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;

};
int main(){
    struct Driver d1,d2,d3;
    
    printf("enter the details of the drivers\n");

    printf("enter the name of the first drivers\n");
    scanf("%s",&d1.name);
    printf("enter the dlnumber of the first drivers\n");
    scanf("%s",&d1.dlNo);
    printf("enter the route of the first drivers\n");
    scanf("%s",&d1.route);
    printf("enter the kms of the first drivers\n");
    scanf("%d",&d1.kms);


    printf("enter the name of the second  drivers\n");
    scanf("%s",&d2.name);
    printf("enter the dlnumber of the second drivers\n");
    scanf("%s",&d2.dlNo);
    printf("enter the route of the second  drivers\n");
    scanf("%s",&d2.route);
    printf("enter the kms of the second  drivers\n");
    scanf("%d",&d2.kms);

    printf("enter the name of the third drivers\n");
    scanf("%s",&d3.name);
    printf("enter the dlnumber of the third drivers\n");
    scanf("%s",&d3.dlNo);
    printf("enter the route of the third drivers\n");
    scanf("%s",&d3.route);
    printf("enter the kms of the third drivers\n");
    scanf("%d",&d3.kms);


    printf("********** printing information of these driver ************\n");
    printf("for Driver No1:\n Name is %s ",d1.name);
    printf("Dl number is%s\n",d1.dlNo);
    printf("Route is %s\n",d1.route);
    printf("Kms is %d\n",d1.kms);

    printf("for Driver No2:\n Name is %s ",d2.name);
    printf("Dl number is%s\n",d2.dlNo);
    printf("Route is %s\n",d2.route);
    printf("Kms is %d\n",d2.kms);


printf("for Driver No3:\n Name is %s ",d3.name);
    printf("Dl number is%s\n",d3.dlNo);
    printf("Route is %s\n",d3.route);
    printf("Kms is %d\n",d3.kms);
    
    

    
    return 0;
}

/*  
enter the details of the drivers

//INPUT DATA
enter the name of the first drivers
harry
enter the dlnumber of the first drivers
samrat
enter the route of the first drivers
rewa
enter the kms of the first drivers
54
enter the name of the second  drivers
dev
enter the dlnumber of the second drivers
diamond
enter the route of the second  drivers
satma
enter the kms of the second  drivers
66
enter the name of the third drivers
jal
enter the dlnumber of the third drivers
karj
enter the route of the third drivers
jabalpur
enter the kms of the third drivers
98
********** printing information of these driver ***********

//OUTPUT OF DATA:
for Driver No1:
 Name is harry Dl number issamrat
Route is rewa
Kms is 54
for Driver No2:
 Name is dev Dl number isdiamond
Route is satma
Kms is 66
for Driver No3:
 Name is jal Dl number iskarj
Route is jabalpur
Kms is 98 */