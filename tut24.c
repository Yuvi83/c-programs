
#include<stdio.h>

int main()
{
    /* conver sion of units homework*/
    //km to miles,inches to foot ,cm to m and so on
    char input;
    float KmsToMiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundtokgs =0.453592;
    float inchestometers = 0.0254;
    float first,second;
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        
    while (1)
    {
        printf("Enter the input character.q to quit\n  1. Kms to miles\n  2.inches To foot\n  3.cms to inches\n   4.pound to kgs\n   5. inches To foot\n");
        scanf("%c",&input);
        switch (input)
        {
        case 'q':
        printf("quiting the program...");
        goto end;
            break;
        case '1':
       printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);

        second = first*KmsToMiles;
        printf("%f km is equal to%f miles\n",first,second);
        break;
         case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);

        printf("%f inches is equal to%f foot\n",first,second);
        break;
        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);

        second = first*cmsToInches ;
        printf("%f cm is equal to%f inches\n",first,second);
        break;
        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);

        second = first* poundtokgs;
        printf("%f pounds is equal to%f kg\n",first,second);
        break;
        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);

        second = first*inchestometers;
        printf("%f inches is equal to%f meters\n",first,second);
        break;
        
        default:
        printf("this");
            break;
        }
    }
    end:
    
    return 0;
}

