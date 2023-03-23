//ARRAY AND POINTER ARITHMETIC IN C
/* there are four arithmetic operator that can be used on pointers
e.g.[++,--,+,-]*/
//Consider the following declaration:int arr[0];
//what is type of array?
//however arr ,by itself,,without any index subscripting can be assigned to to an integer pointer
//what type does arr[i] have?
//arr[i]==*(arr+i) 
// if we add 1 pointer increases size of int e.g 4bytes
//if array is a pointer to arr[0] then arr+i is a pointer to arr[i]

/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    //arr++,arr-- both not work this line will throw error because constat not run
    int *arrayptr = arr;
      printf("value at position3 of the arary is %d\n",arr);

    arrayptr++;
    printf("value at position3 of the arary is %d\n",arr);

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("value at position3 of the arary is %d\n",arr[3]);
    printf("the address of first element of the array is %d \n",&arr[0]);
     printf("the value of first element of the array is %d \n",arr);
    printf("the address of second element of the array is %d \n",&arr[1]);
    printf("the address of second element of the array is %d \n",arr+1);
    printf("the address of third element of the array is %d \n",&arr[2]);
    printf("the address of fourth element of the array is %d \n",&arr[3]);

     printf("the value at address of first element of the array is %d \n",*(&arr[0]));
     printf("the value at address of first element of the array is %d \n",*(arr));
    printf("the value of address of second element of the array is %d \n",*(&arr[1]));
    printf("the value at address of second element of the array is %d \n",*(arr+1));
    printf("the value at address of second element of the array is %d \n",arr[1]);


    return 0;
}