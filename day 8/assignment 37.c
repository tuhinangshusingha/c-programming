#include <stdio.h>

int main() {
    int num, choice;

    // Accept number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display menu
    printf("\nMenu:\n");
    printf("1. Check if the number is a Buzz number or not\n");
    printf("2. Check if the number is Even or Odd\n");
    printf("3. Check if the number is Positive or Negative\n");

    // Accept user choice
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform operation based on choice
    switch (choice) {
        case 1:
            // Buzz number: divisible by 7 or ends with 7
            if (num % 7 == 0 || num % 10 == 7)
                printf("%d is a Buzz number.\n", num);
            else
                printf("%d is not a Buzz number.\n", num);
            break;

        case 2:
            // Even or Odd
            if (num % 2 == 0)
                printf("%d is an Even number.\n", num);
            else
                printf("%d is an Odd number.\n", num);
            break;

        case 3:
            // Positive or Negative
            if (num > 0)
                printf("%d is a Positive number.\n", num);
            else if (num < 0)
                printf("%d is a Negative number.\n", num);
            else
                printf("The number is Zero.\n");
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 3.\n");
    }

    return 0;
}