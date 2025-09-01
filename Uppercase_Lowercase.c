#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", ch);
    }
    else {
        printf("%c is not an Alphabet.\n", ch);
    }

    return 0;
}