#include<stdio.h>
#include<string.h>

int main(){
  char str[100], rev[100];
  int i, len, isPalindrome = 1;
  
  printf("Enter a string\n");
  scanf("%s", str);
  
  len = strlen(str);
  
  for(i = 0; i < len; i++){
    rev[i] = str[len - 1 - i];
  }
  rev[i] = '\0';
  
  for(i = 0; i < len; i++){
    if(str[i] != rev[i]){
      isPalindrome = 0;
      break;
    }
  }
  
  if(isPalindrome == 1){
    printf("%s is a palindrome\n", str);
  }
  else{
    printf("%s is not a palindrome\n", str);
  }
  
  return 0;
}
