#include<stdio.h>

int main()
{
    int choices;

    while(1)
    {
        printf("Menu:\n");
        printf("Welcome to the Prathams Program!\n");
        printf("SELECT YOUR CHOICE:\n");
        printf("1. addition\n");
        printf("2. substraction\n");
        printf("3. Exit from the program\n");
        scanf("%d", &choices);

        switch(choices)
        {
            case 1:
            {
                int a, b, sum;
                printf("Enter two numbers to add: ");
                scanf("%d %d", &a, &b);
                sum = a + b;
                printf("Sum: %d\n", sum);
                   break;
            }
            case 2:
            {
                int a, b, diff;
                printf("Enter two numbers to subtract: ");
                scanf("%d %d", &a, &b);
                diff = a - b;
                printf("Difference: %d\n", diff);
                   break;
            }
            case 3:
            {
                printf("Exiting the program. Goodbye!\n");
                goto end;
            }
        }
            
    }
    end:
    return 0;
}