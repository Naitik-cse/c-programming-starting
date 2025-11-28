#include<stdio.h>
#include<math.h>

int main() {
    int num, prime = 1;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            prime = 0;
        }
    }
    
    if(prime == 0) {
        printf("It is not a prime number");
    } else {
        printf("It is a prime number");
    }
    
    return 0;
}
