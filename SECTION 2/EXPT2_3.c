/* Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers.
*/
#include "stdio.h"
void main()
{
    float fnum1, fnum2, result;
    printf("Enter 1st floating point no.\n");
    scanf("%f", &fnum1);
    printf("Enter 2nd floating point no.\n");
    scanf("%f", &fnum2);
    result = fnum1 / fnum2;
    printf("After dividing %g by %g,the result is:%g", fnum1, fnum2, result);
}
