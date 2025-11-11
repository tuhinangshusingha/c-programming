#include <stdio.h>

int main() {
    int a, b, c, choice;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nMenu:\n");
    printf("1. Check if the numbers are equal or display the greatest number\n");
    printf("2. Check if all numbers are Positive, Negative, or Mixed\n");

    printf("\nEnter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (a == b && b == c)
                printf("All three numbers are equal.\n");
            else {
                int greatest;
                if (a > b && a > c)
                    greatest = a;
                else if (b > a && b > c)
                    greatest = b;
                else
                    greatest = c;
                printf("The greatest number is: %d\n", greatest);
            }
            break;

        case 2:
            if (a > 0 && b > 0 && c > 0)
                printf("All numbers are Positive.\n");
            else if (a < 0 && b < 0 && c < 0)
                printf("All numbers are Negative.\n");
            else
                printf("The numbers are Mixed (both positive and negative).\n");
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}