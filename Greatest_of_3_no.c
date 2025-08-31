#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);
    printf("Enter third no:");
    scanf("%d",&c);
    if(a>b && a>c) {
    printf("First no. is greatest.");
    }
    else if(b>a && b>c){
    printf("Second no. is greatest.");
    }
    else{
        printf("Third no. is the greatest.");
    }
    return 0;
}