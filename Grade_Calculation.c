#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    // Grade calculation using if-else
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    }
    else if (marks >= 75 && marks < 90) {
        printf("Grade: B\n");
    }
    else if (marks >= 60 && marks < 75) {
        printf("Grade: C\n");
    }
    else if (marks >= 40 && marks < 60) {
        printf("Grade: D\n");
    }
    else if (marks >= 0 && marks < 40) {
        printf("Grade: F (Fail)\n");
    }
    else {
        printf("Invalid marks! Please enter between 0 and 100.\n");
    }

    return 0;
}