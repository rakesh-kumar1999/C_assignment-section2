/*: Rewrite the program mentioned in Experiment 2.2. However, rename the data types 
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement. */

#include "stdio.h"
#include"math.h"
typedef float decimal;
typedef int integer;
void main()
{
    integer p;
    decimal si, ci, r, t,A;
    /*p=principal amount,A=final amount,r=rate of interest,t=time,si=simple interest,ci=compound interest,t=time period*/
    printf("Enter the principal amount:\n");
    scanf("%d", &p);
    printf("Enter the rate of interest\n");
    scanf("%f", &r);
    printf("Enter the time period\n");
    scanf("%f", &t);
    si = (p * t * r) / 100;
    printf("simple interest of that principal amount %d is :%g\n\n", p, si);
    A = p * pow(1 + (r / 100), t);
    ci = A - p;
    printf("compound interest of that principal amount %d is:%g", p, ci);
}



