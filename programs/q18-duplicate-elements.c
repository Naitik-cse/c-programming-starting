#include<stdio.h>

int main()
{
    int n, i, j, count, found = 0;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("Invalid size!\n");
        return 0;
    }
    
    int arr[n];
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Duplicate elements are:\n");
    
    for(i = 0; i < n; i++)
    {
        count = 1;
        
        // If already marked as processed, skip
        if(arr[i] == -1)
            continue;
        
        // Count occurrences
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; // Mark as processed
            }
        }
        
        // If count > 1, it's a duplicate
        if(count > 1)
        {
            printf("%d\n", arr[i]);
            found = 1;
        }
    }
    
    if(!found)
        printf("-1\n");
    
    return 0;
}
