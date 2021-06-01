#include <stdio.h>
//Question check if number is strong or not

int factorial(int n)
{ //function to find factorial
    if ((n - 1) != 0)
    {
        return factorial(n - 1) * n;
    }
    else
    {
        return n;
    }
}

int main()
{
    int n, i, sum;
    printf("Enter the number:\n");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        int remainder = i % 10;
        i = i / 10;
        sum = sum + factorial(remainder);
    }
    if (sum == n)
    {
        printf("Given number %d is strong", n);
    }
    else
    {
        printf("Given number %d is not strong", n);
    }
    return 0;
}