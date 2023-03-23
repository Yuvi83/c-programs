#include <stdio.h>
void starpattern(int rows);
void reversestarpattern(int rows);

int main()
{
    int rows, type;
    printf("how many rows do you want?\n");
    scanf("%d", &rows);
    // printf("enter o for star pattern and 1 for reverse star pattern\n");
    // scanf("%d", &type);

    starpattern(rows);
    reversestarpattern(rows);
    switch (type)
    {
        // printf("enter o for star pattern and 1 for reverse star pattern\n");
        // scanf("%d",&type);
        printf("enter o for star pattern and 1 for reverse star pattern\n");
    scanf("%d", &type);
    case 0:
        starpattern(rows);
        break;
    case 1:
        reversestarpattern(rows);
        break;

    default:
        printf("you have enter invalid choice\n");
        break;
    }

    return 0;
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // write stars
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*void starpattern(int rows){
    for (int i = 0; i < rows; i++)
    {
        //write stars
        for (int j = 0; j <= i; j++)
        {
             printf("*");
        }
         printf("\n");
    }
}*/
