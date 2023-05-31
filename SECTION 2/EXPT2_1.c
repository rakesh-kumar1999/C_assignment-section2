/* Write a program to compute the area of a triangle given its base and height*/
#include "stdio.h"
void main()
{
    int base, height;
    float area;
    printf("Enter the base and height of the Triangle\n");
    scanf("%d %d", &base, &height);
    area = (float)1 / 2 * base * height;
    printf("Area of the triangle is %g\n", area);
}
