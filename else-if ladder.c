#include<stdio.h>

int main()
{
    int score;

    printf("enter your score:");
    scanf("%d", &score);

    if(score >= 90)
    {
        printf("A+ grade\n");
    }
    else if(score >= 75)
    {
        printf("A grade\n");
    }
    else if(score >= 60)
    {
        printf("B grade\n");
    }
    else if(score >= 40)
    {
        printf("C grade\n");
    }
    else
    {
        printf("fail\n");
    }

    return 0;
}