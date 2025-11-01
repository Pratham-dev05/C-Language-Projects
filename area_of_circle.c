#include<stdio.h>

int main()
{
    int radius;
    #define pi 3.142
    float area;
    printf("Enter the radius of a circle:\n");
    scanf("%d", &radius);

    area = pi*radius*radius;

    printf("Area of the circle is: %f", area);
    return 0;
}