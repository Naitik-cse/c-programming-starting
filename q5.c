#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char str[100];
  int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;
  
  printf("Enter a string\n");
  fgets(str, sizeof(str), stdin);
  
  for(i = 0; str[i] != '\0'; i++){
    if(isspace(str[i])){
      spaces++;
    }
    else if(isdigit(str[i])){
      digits++;
    }
    else if(isalpha(str[i])){
      char ch = tolower(str[i]);
      if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        vowels++;
      }
      else{
        consonants++;
      }
    }
  }
  
  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);
  
  return 0;
}
