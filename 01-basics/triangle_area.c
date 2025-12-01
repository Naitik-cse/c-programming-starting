#include <stdio.h>

int main() {
    int base, height;
    printf("Enter value of base: ");
    scanf("%d", &base);
    printf("Enter value of height: ");
    scanf("%d", &height);
    printf("The area of triangle is %.2f\n", 1.0 / 2.0 * base * height);
    return 0;
}
