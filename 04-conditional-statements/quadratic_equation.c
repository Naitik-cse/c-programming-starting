#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("a is coefficient of x^2 and b of x and c is variable\n");
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);
    printf("enter value of c: ");
    scanf("%d", &c);
    printf("so the equation will be %dx^2+%dx+%d\n", a, b, c);
    if(b*b - 4*a*c > 0)
        printf("roots are real and unequal");
    else if(b*b - 4*a*c == 0)
        printf("roots are real and equal");
    else
        printf("roots are imaginary");
    return 0;
}
