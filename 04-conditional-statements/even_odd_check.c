#include <stdio.h>

int main() {
    int number;
    printf("Write the no. of devices ON: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is an even no.\n", number);
    } else {
        printf("%d is an odd no.\n", number);
    }
    return 0;
}
