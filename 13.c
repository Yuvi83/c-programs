//FUNCTION POINTER

#include<stdio.h>
#include<stdlib.h>

int sum(int a ,int b){
    return a+b;
}
void greet(){
    printf("Hello world my user good morning %d \n");
}
int main()
{

    printf("the sum of 1 and 2 is %d \n",sum(1,2));//testing the function 
    int(*fptr)(int,int);//declaring a function pointer 
    fptr =&sum;//creating a function pointer 
    int d = (*fptr)(4,6);  //Dereferencing a function pointer
    printf("The  value of d is %d\n",d);

    return 0;

}
/*OUTPUT:
the sum of 1 and 2 is 3 
The  value of d is 10
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float Edistance(int x1,int y1,int x2,int y2){
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);

    return sqrt(a);
}

//float areaofcircle (int x1,int y1,int x2,int y2,<function pointer here>)
float areaofcircle (int x1,int y1,int x2,int  y2,float(*distance)(int x1,int y1,int x2,int  y2)){
    return distance(x1,y1,x2,y2);
}
int main()
{
    //take x1,y1 and x2,y2 from the user using scanf
    int x1,y1,x2,y2;
    float dst;
    printf("Enter the value of x1\n ");
    scanf("%d",&x1);

    printf("Enter the value of y1\n ");
    scanf("%d",&y1);

    printf("Enter the value of x2\n ");
    scanf("%d",&x2);

    printf("Enter the value of y2\n ");
    scanf("%d",&y2);
    dst = areaofcircle(x1,y1,x2,y2,Edistance);
    printf("The distance between these point is%.2f:\n",dst);
    return 0;
}
//eucledian distance formula
/*OUTPUT:
Enter the value of x1
 3
Enter the value of y1
 5
Enter the value of x2
 8
Enter the value of y2
 9
The distance between these point is6.40:
*/