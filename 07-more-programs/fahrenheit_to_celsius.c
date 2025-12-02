#include <stdio.h>

int main() {
    int fahrenheit;
    printf("Tell weather temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);
    
    printf("Weather temperature in C is: %f\n", (fahrenheit - 32) * 0.5556);
    return 0;
}
