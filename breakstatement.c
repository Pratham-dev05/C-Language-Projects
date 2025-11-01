/*break is used to exit from a loop or a switch statement immediately, even if the condition hasn’t finished.*/

#include<stdio.h>

int main()
{
    int i;

    for(i=1 ; i<=10 ; i++)
    {
        if (i==5)
        {
            break;  //when i is 5, loop will terminate
        }
        printf("%d", i);
    }

    return 0;
}