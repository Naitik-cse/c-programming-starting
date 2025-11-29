#include<stdio.h>
#include<math.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    
    printf("Sum will be %d", sum);
    return 0;
}
