#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        number *= -1; // Square if the number is negative to make it positive
        printf("Square of the number: %d\n", number);
    }
    // Check if the number is between 1 and 10
    else if (number >= 1 && number <= 10) {
        printf("The number before %d is %d\n", number, number - 1);
    }
    // Check if the number is between 10 and 100
    else if (number > 10 && number < 100) {
        if (number % 2 == 0) {
            printf("The number is even\n");
        } else {
            printf("The number is odd\n");
        }
    } else {
        printf("Number is out of range\n");
    }

    return 0;
}
