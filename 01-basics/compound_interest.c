#include <stdio.h>
#include <math.h>

int main() {
    int principal, rate, notimes, time;
    printf("Enter value of principal: ");
    scanf("%d", &principal);
    printf("Enter value of rate: ");
    scanf("%d", &rate);
    printf("Enter value of no. of times interest is compounded: ");
    scanf("%d", &notimes);
    printf("Enter value of time: ");
    scanf("%d", &time);
    printf("Amount will be equal to %.2f\n", principal * pow((1 + rate / (notimes * 100.0)), notimes * time));
    return 0;
}
