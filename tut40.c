#include<stdio.h>
void arrayRev(int arr[]);
void arrayRev(int arr[])
{
for (int i = 0; i < 7/2; i++)
    {
        int temp;
        //swap item i with item 6-i
        temp = arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
       
}
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
     printf("the value of %d is %d \n",i,arr[i]);
    }
    
}
int main()
{
    int arr[] ={1,2,3,4,5,6,7};
    printf("\nbefore reversing array:\n");
    arrayprint(arr);
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("the value of %d is %d \n",i,arr[i]);
    // }

    arrayRev(arr);
    printf("after reversing array:\n");
    arrayprint(arr);
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("\nthe value of %d is %d \n",i,arr[i]);
    // }

    return 0;
}
