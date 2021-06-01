#include <stdio.h>
//Question print numbers in reverse from n to 1
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}