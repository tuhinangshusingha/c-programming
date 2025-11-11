#include <stdio.h>

int main() {
    int num, firstDigit, secondDigit, sum;

    // Input a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    // Check if number is actually two-digit
    if (num < 10 || num > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 0;
    }

    // Split digits
    firstDigit = num / 10;     // tens place
    secondDigit = num % 10;    // ones place

    // Add sum of digits to the product of digits
    sum = (firstDigit + secondDigit) + (firstDigit * secondDigit);

    // Check condition
    if (sum == num)
        printf("%d is a Special Two-Digit Number.\n", num);
    else
        printf("%d is NOT a Special Two-Digit Number.\n", num);

    return 0;
}