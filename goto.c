/*e goto statement is used to jump from one part of a program to another.
It can make code confusing if used wrongly — so it’s mostly avoided in modern coding, but useful for breaking out of deep nested loops.*/


#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        goto negative;
    }
    
    printf("You entered a positive number: %d", num);
    return 0;

    negative:
    printf("You entered a negative number: %d\n",num);
    return 0;

}