#include <stdio.h>

int main() {
    int num, choice, temp, rem, count = 0;
    int sum = 0, square, lastDigits, original;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display menu
    printf("\nMenu:\n");
    printf("1. Check if the number is a Narcissistic (Armstrong) number\n");
    printf("2. Check if the number is an Automorphic number\n");

    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Narcissistic number check
            temp = num;
            original = num;

            // Count number of digits
            while (temp > 0) {
                count++;
                temp /= 10;
            }

            temp = num;
            sum = 0;

            // Calculate sum of digits^count
            while (temp > 0) {
                rem = temp % 10;
                int power = 1;
                for (int i = 1; i <= count; i++)
                    power *= rem;
                sum += power;
                temp /= 10;
            }

            if (sum == original)
                printf("%d is a Narcissistic (Armstrong) number.\n", original);
            else
                printf("%d is NOT a Narcissistic (Armstrong) number.\n", original);
            break;

        case 2:
            // Automorphic number check
            square = num * num;

            temp = num;
            int powerTen = 1;

            // Find number of digits
            while (temp > 0) {
                powerTen *= 10;
                temp /= 10;
            }

            lastDigits = square % powerTen;

            if (lastDigits == num)
                printf("%d is an Automorphic number.\n", num);
            else
                printf("%d is NOT an Automorphic number.\n", num);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}