/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise)*/
#include "stdio.h"
void main()
{
    float Rupees;
    int paise;
    printf("Enter the price of the article in rupee:\n");
    scanf("%f", &Rupees);
    paise = Rupees * 100;
    printf("price of article in paise :%d", paise);
}
