#include <stdio.h>
int main() 
{
    float basic, hra, ta, da, total;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    if (basic > 50000)
        hra = 0.20 * basic;  
    else if (basic > 30000)
        hra = 0.50 * basic;  
    else
        hra = 0;             
    ta = 0.10 * basic;
    da = 0.05 * basic;
    total = basic + hra + ta + da;
    printf("\n----- Salary Details -----\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("TA: %.2f\n", ta);
    printf("DA: %.2f\n", da);
    printf("---------------------------\n");
    printf("Total Salary: %.2f\n", total);

    return 0;
}