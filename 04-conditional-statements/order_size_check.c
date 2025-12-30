#include<stdio.h>

int main()
{
    int number;
    printf("enter the size of order: ");
    scanf("%d", &number);
    if(number >= 30 && number <= 50)
        printf("yes order size is accepted for offer");
    else
        printf("no order size cant be accepted for offer");
    return 0;
}
