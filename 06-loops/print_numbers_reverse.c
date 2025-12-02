#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(n; n!=0; n--) {
        printf("%d ", n--);
    }
    
    return 0;
}
