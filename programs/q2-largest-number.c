#include<stdio.h>

int main()
{
    int num1, num2, largest = 0;
    
    printf("enter the 1st number\n");
    scanf("%d", &num1);
    printf("enter the 2nd number\n");
    scanf("%d", &num2);
    
    for(int i = 0; i < num1; i++)
    {
        int num = num1 - i;
        int numb = num2 - i;
        
        if(num > 0 && numb > 0)
        {
            if(largest < num)
                largest = num;
            if(largest < numb)
                largest = numb;
        }
    }
    
    printf("%d\n", largest);
    return 0;
}
