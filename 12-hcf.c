#include <stdio.h>
//Question print HCF of two numbers
int main()
{
    int i = 1, a, b, hcf;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        i++;
    }
    printf("HCF of given numbers is: %d", hcf);
    return 0;
}