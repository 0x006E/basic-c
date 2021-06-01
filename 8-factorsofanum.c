#include <stdio.h>
//Question find factors of a number
int main()
{
    int n, i = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Factors are: ");
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}