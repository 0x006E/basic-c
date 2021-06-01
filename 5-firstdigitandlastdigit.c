#include <stdio.h>
//Question find first and last digit of given number
int main()
{
    int n, fdigit, ldigit;
    printf("Enter the number:\n");
    scanf("%d", &n);
    ldigit = n % 10;
    while (n != 0)
    {
        if (n / 10 == 0)
        {
            fdigit = n;
        }
        n = n / 10;
    }
    printf("First Digit: %d\n", fdigit);
    printf("Last Digit: %d\n", ldigit);
    return 0;
}