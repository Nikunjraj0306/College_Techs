#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);
    if(a>b)
    printf("First no. is greater than second.");
    else
    printf("Second no. is greater than first.");
    return 0;
}