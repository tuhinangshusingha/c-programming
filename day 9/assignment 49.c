#include <stdio.h>

int main() {
    char alphabet = 'A';
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces for right alignment
        for(j = 1; j <= rows - i; j++) {
            printf("  "); // 2 spaces for better alignment
        }
        // Print letters
        for(j = 1; j <= i; j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }

    return 0;
}