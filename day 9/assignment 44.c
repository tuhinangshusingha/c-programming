#include <stdio.h>

int main() {
    int totalCookies;
    int cookiesPerBox = 24;
    int boxesPerContainer = 75;
    int totalBoxes, totalContainers, remainingCookies, remainingBoxes;

    // Input total number of cookies
    printf("Enter the total number of cookies: ");
    scanf("%d", &totalCookies);

    // Calculate number of boxes and remaining cookies
    totalBoxes = totalCookies / cookiesPerBox;
    remainingCookies = totalCookies % cookiesPerBox;

    // Calculate number of containers and remaining boxes
    totalContainers = totalBoxes / boxesPerContainer;
    remainingBoxes = totalBoxes % boxesPerContainer;

    // Display result
    printf("\nNumber of containers needed: %d", totalContainers);
    printf("\nNumber of boxes needed: %d", totalBoxes);
    printf("\nRemaining boxes (not in a full container): %d", remainingBoxes);
    printf("\nRemaining cookies (not in a full box): %d\n", remainingCookies);

    return 0;
}