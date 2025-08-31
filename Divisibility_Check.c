#include <stdio.h>

int main() {
    int number, divisor;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Divisibility check
    if (divisor == 0) {
        printf("Division by zero is not allowed!\n");
    }
    else if (number % divisor == 0) {
        printf("%d is divisible by %d\n", number, divisor);
    }
    else {
        printf("%d is NOT divisible by %d\n", number, divisor);
    }

    return 0;
}
