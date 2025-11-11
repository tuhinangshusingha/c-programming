#include <stdio.h>

int main() {
    int n = 3; // Size of the matrix
    int a[3][3];
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int num = 1;

    while (num <= n*n) {
        // Top row
        for (int i = left; i <= right && num <= n*n; i++)
            a[top][i] = num++;
        top++;

        // Right column
        for (int i = top; i <= bottom && num <= n*n; i++)
            a[i][right] = num++;
        right--;

        // Bottom row
        for (int i = right; i >= left && num <= n*n; i--)
            a[bottom][i] = num++;
        bottom--;

        // Left column
        for (int i = bottom; i >= top && num <= n*n; i--)
            a[i][left] = num++;
        left++;
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}