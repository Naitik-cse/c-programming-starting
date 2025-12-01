#include <stdio.h>

int main() {
    int amount, rate, time;
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    printf("Simple interest: %.2f\n", (amount * rate * time) / 100.0);
    return 0;
}
