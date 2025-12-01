#include <stdio.h>

int main() {
    int itemno, quantity, unitprice, total;
    printf("Write item no.: ");
    scanf("%d", &itemno);
    printf("Write no. of quantity: ");
    scanf("%d", &quantity);
    printf("Write no. of unit price: ");
    scanf("%d", &unitprice);
    total = quantity * unitprice;
    printf("Total amount is %d\n", total);
    printf("Total amount after discount is %.2f\n", total * 80 / 100.0);
    return 0;
}
