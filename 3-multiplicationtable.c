#include <stdio.h>
//Question print multiplication table of given number
int main()
{
    int n, i = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (i <= 10) //loops until multiplication table reaches x10
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        i++;
    }
    return 0;
}