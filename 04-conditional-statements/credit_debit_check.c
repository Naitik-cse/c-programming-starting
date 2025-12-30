#include<stdio.h>

int main()
{
    int amt;
    printf("enter amount: ");
    scanf("%d", &amt);
    if(amt > 0)
        printf("%d amount is credited", amt);
    else if(amt < 0)
        printf("%d amount is debited", amt*-1);
    else
        printf("no amount is credit or debit");
    return 0;
}
