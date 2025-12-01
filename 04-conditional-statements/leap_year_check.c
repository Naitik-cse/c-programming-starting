#include <stdio.h>

int main() {
    int days;
    printf("Enter no. of days in Feb: ");
    scanf("%d", &days);
    if (days == 29) {
        printf("It is a leap year\n");
    } else {
        printf("It's not a leap year\n");
    }
    return 0;
}
