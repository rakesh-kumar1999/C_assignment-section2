/*: Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include "stdio.h"
#include"math.h"
void main()
{
    int principal;
    float Famount,si, ci, rate, time;/*si=simple interest and ci=compound interest Famount=final amount*/
    printf("Enter the principal amount:\n");
    scanf("%d", &principal);
    printf("Enter the rate of interest\n");
    scanf("%f", &rate);
    printf("Enter the time period\n");
    scanf("%f", &time);
    si = (principal * time * rate) / 100;
    printf("simple interest of that principal amount %d is :%g\n\n", principal, si);
    Famount = principal * pow(1 + (rate / 100), time);/* to calculate A=P(1+ r/100)^n and ci= A-P*/
    ci = Famount - principal;
    printf("compound interest of that principal amount %d is:%g", principal, ci);
}
