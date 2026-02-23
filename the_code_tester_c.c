#include <stdio.h>

int main(void)
{
    // 1. Write a printf statement that writes 10 stars
    printf("**********\n");
    // 2. Declare an int variable named "num" and initialize it to 10 and use a printf statement to print its value
    int num = 10;
    printf("The value of num is: %d\n", num);
    // 3. declare another int x and use scanf to assign a value to it, then use a printf statement to print its value
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("The value of x is: %d\n", x);
    

    return 0;
}
