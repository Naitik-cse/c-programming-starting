#include<stdio.h>

// Program 1: Command line arguments
int main(int argC, int argV[])
{
    printf("%s\n", argV[1]);
    printf("%s\n", argV[2]);
    return 0;
}

// Program 2: String manipulation
int main()
{
    char arr[10] = "hello";
    char are[10] = "hell";
    char new[10];
    
    for(int i = 0; arr[i] != '\0'; i++)
        new[i] = arr[i];
    
    return 0;
}
