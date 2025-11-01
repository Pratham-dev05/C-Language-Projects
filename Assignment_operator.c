#include<stdio.h>

int main()
{
    int a=10, b=3;

    //printf("Assign: %d\n", a=b);
    printf("add and assign: %d\n", a+=b);
    printf("sub and assign: %d\n", a-=b);
    printf("mul and assign: %d\n", a*=b);
    printf("div and assign: %d", a/=b);
    printf("mod and assign: %d", a%=b);

    return 0;

}