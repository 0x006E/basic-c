#include <stdio.h>
//Question to swap numbers using temp var
int main() {
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped numbers %d %d",a,b);
    return 0;
}