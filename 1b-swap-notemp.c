#include <stdio.h>
//Question to swap numbers w/o using temp var
int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    a = a ^ b; // a XOR b
    b = b ^ a; // b XOR a
    a = a ^ b; // a XOR b
    printf("Swapped numbers %d %d", a, b);
    return 0;
}