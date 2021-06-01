#include <stdio.h>
//Question print number of digits of given number
int main()
{
    int n, i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    printf("Number of digits: %d", i);
    return 0;
}