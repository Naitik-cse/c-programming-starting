#include<stdio.h>

int main()
{
    int number, value;
    printf("enter no. of orders: ");
    scanf("%d", &number);
    printf("enter value of one order: ");
    scanf("%d", &value);
    if(number >= 1000)
        printf("discount is valid, value: %d, applying discount total value is: %f", number*value, (number*value)*(90/100.0));
    else
        printf("no discount, valid value: %d", number*value);
    return 0;
}
