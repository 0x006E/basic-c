#include <stdio.h>
//Question check if number is perfect or not
int main()
{
    int n, i = 1, sum;
    printf("Enter the number:\n");
    scanf("%d", &n);

    while (i <= (n / 2))
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
    {
        printf("Given number %d is perfect", n);
    }
    else
    {
        printf("Given number %d is not perfect", n);
    }
    return 0;
}