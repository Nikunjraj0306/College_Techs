#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",& n);
    if(n%2==0)
    printf("The no. is even.");
    else
    printf("The no. is odd");
    return 0;
}