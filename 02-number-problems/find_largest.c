#include<stdio.h>
#include<math.h>

int main() {
    int num, num1, largest = 0;
    
    printf("How many numbers wanted: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        printf("Enter your %d number: ", i);
        scanf("%d", &num1);
        
        if(num1 > largest) {
            largest = num1;
        }
    }
    
    printf("Largest number is %d", largest);
    return 0;
}
