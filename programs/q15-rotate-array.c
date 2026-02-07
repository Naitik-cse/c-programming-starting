#include<stdio.h>

int main()
{
    int num;
    printf("enter the number of terms\n");
    scanf("%d", &num);
    
    int arr[num];
    printf("enter the value of array\n");
    for(int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    
    // Store last element
    int last = arr[num - 1];
    
    // Rotate array to right by 1
    for(int i = num - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    
    // Place last element at start
    arr[0] = last;
    
    printf("Rotated array: ");
    for(int i = 0; i < num; i++)
        printf("%d, ", arr[i]);
    
    return 0;
}
