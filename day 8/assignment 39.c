#include <stdio.h>

int main() {
    float a, b, c;
    float s, areaSquare, perimeter;

    
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && b + c > a && c + a > b) {
        perimeter = a + b + c;
        s = perimeter / 2;

        // Calculate area² (Heron's formula without sqrt)
        areaSquare = s * (s - a) * (s - b) * (s - c);

        // Compare area² and perimeter²
        if (areaSquare == perimeter * perimeter)
            printf("The triangle is an Equivariable Triangle.\n");
        else
            printf("The triangle is NOT an Equivariable Triangle.\n");

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}