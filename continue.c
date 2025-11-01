/*continue is used to skip the current iteration of a loop and continue with the next one.*/

#include<stdio.h>
int main()
{
    int i;

    for(i=1 ; i<=10 ; i++)
    {
        if (i==5)
        {
            continue;  //when i is 5, skip the rest of the loop iteration
        }
        printf("%d\n", i);
    }

    return 0;
}