#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print the left side of the pattern
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Print spaces to align the right side
        for (int k = 1; k <= n - i; k++) {
            printf("  "); // Two spaces for alignment
        }
        
        // Print the right side of the pattern
        for (int l = i; l >= 1; l--) {
            printf("%d ", l);
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}