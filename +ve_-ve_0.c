#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input number from the user
    scanf("%d", &number);

    // Check the condition using if-else if-else statements
    if (number > 0) {
        printf("%d is a positive number.\\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\\n", number);
    } else {
        printf("The number is zero.\\n");
    }

    return 0;
}
