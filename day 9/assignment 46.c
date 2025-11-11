#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number (optional)
    int original = num;

    // Handle negative numbers safely
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num; // make it positive for reversing
    }

    // Reverse digits
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    reversed = reversed * sign; // restore original sign

    // Display result
    printf("The reversed number of %d is %d\n", original, reversed);

    return 0;
}