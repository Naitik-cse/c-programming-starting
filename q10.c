#include<stdio.h>

int main(){
  int n, i, sum = 0;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter array elements\n");
  
  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  
  printf("Sum of array elements: %d\n", sum);
  printf("Average: %.2f\n", (float)sum / n);
  
  return 0;
}
