#include <stdio.h>

int main() {
    int fahrenheit;
    printf("Tell weather temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    printf("Weather temperature in C is %.2f\n", (fahrenheit - 32.0) * 5.0 / 9.0);
    return 0;
}
