#include <stdio.h>

int main() {
    int num, choice, i, count = 0, digit, smallest;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display menu
    printf("\nMenu:\n");
    printf("1. Check if the number is a Composite number or not\n");
    printf("2. Find the smallest digit of the number\n");

    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Check if number is composite
            if (num <= 1) {
                printf("%d is neither Prime nor Composite.\n", num);
            } else {
                for (i = 1; i <= num; i++) {
                    if (num % i == 0)
                        count++;
                }
                if (count > 2)
                    printf("%d is a Composite number.\n", num);
                else
                    printf("%d is NOT a Composite number.\n", num);
            }
            break;

        case 2:
            // Find smallest digit
            if (num < 0)
                num = -num;  // handle negative numbers

            smallest = num % 10; // initialize smallest with last digit

            while (num > 0) {
                digit = num % 10;
                if (digit < smallest)
                    smallest = digit;
                num = num / 10;
            }
            printf("The smallest digit is: %d\n", smallest);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}