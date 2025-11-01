#include<stdio.h>

int main()
{
    int month, day, option;

    printf("Choose one option:\n1. Day of the week\n2. Month of the year\n");
    scanf("%d", &option);

    if (option == 1)
    {
         
    printf("Enter day number (1-7):\n");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");    
        break;

        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        default:
        printf("Invalid day number\n");

    }
    }

    else if (option == 2)
    {
    printf("Enter Month Number (1-12):\n");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        printf("January\n");
        break;

        case 2:
        printf("February\n");
        break;

        case 3:
        printf("March\n");
        break;

        case 4:
        printf("April\n");
        break;

        case 5:
        printf("May\n");    
        break;

        case 6:
        printf("June\n");
        break;

        case 7:
        printf("July\n");
        break;

        case 8:
        printf("Auguest\n");
        break;

        case 9:
        printf("September\n");
        break;

        case 10:
        printf("October\n");
        break;

        case 11:
        printf("November\n");
        break;

        case 12:
        printf("December\n");
        break;

        default:
        printf("Invalid day number\n");

    }
    }

    else
    {
        printf("Invalid Input\n");
        printf("Please choose valid options 1 or 2\n");
    }

return 0;
}

/*Notes:

switch works only with integer or character values.

Each case must end with break (otherwise execution “falls through” to the next case).

default runs when no other case matches (it’s optional).*/
