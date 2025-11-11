#include <stdio.h>

int main() {
    float weight, charge;

    // Input parcel weight
    printf("Enter the weight of the parcel (in kg): ");
    scanf("%f", &weight);

    // Calculate charge based on weight slabs
    if (weight <= 10)
        charge = weight * 30;
    else if (weight <= 30)
        charge = (10 * 30) + (weight - 10) * 20;
    else
        charge = (10 * 30) + (20 * 20) + (weight - 30) * 15;

    // Display result
    printf("Total charge for %.2f kg parcel = Rs. %.2f\n", weight, charge);

    return 0;
}