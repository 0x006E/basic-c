#include <stdio.h>
//Question find factorial of a number
int main()
{
    int n, factorial = 1, i = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("Factorial : %d\n", factorial);
    return 0;
}