#include <stdio.h>
//Question print fibonacci upto n-terms
int main()
{
    int i = 1, n, t1 = 0, t2 = 1;
    int next = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", t1, t2);

    while (i < n)
    {
        printf("%d ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
        i++;
    }
    return 0;
}