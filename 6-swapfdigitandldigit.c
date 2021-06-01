#include <stdio.h>
#include <math.h>
//Question find first and last digit of given number
int main()
{
    int n, ldigit, fdigit, nofdigits, swap;
    printf("Enter the number:\n");
    scanf("%d", &n);
    ldigit = n % 10;
    nofdigits = (int)log10(n); //cast float to int since log returns float values
    fdigit = (int)n / pow(10, nofdigits);
    swap = ldigit * pow(10, nofdigits);
    n = n - fdigit * pow(10, nofdigits);
    swap = swap + n;
    swap = swap - ldigit;
    swap = swap + fdigit;
    printf("Last Digit: %d\n", swap);
    return 0;
}