#include <stdio.h>
#include <math.h>

int main() {
    int base, perpendicular;
    printf("Enter value of base: ");
    scanf("%d", &base);
    printf("Enter value of perpendicular: ");
    scanf("%d", &perpendicular);
    printf("Value of hypotenuse is %.2f\n", sqrt(base * base + perpendicular * perpendicular));
    return 0;
}
